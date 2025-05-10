<?php

use App\Http\Controllers\GraphController;
use Illuminate\Support\Facades\Route;


Route::get('/', [GraphController::class, 'index'])->name('graph');
Route::get('/graph/export', [GraphController::class, 'exportToExcel'])->name('graph.export');
