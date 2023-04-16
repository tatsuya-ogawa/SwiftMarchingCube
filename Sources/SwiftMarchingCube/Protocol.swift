//
//  File.swift
//  
//
//  Created by Tatsuya Ogawa on 2023/04/17.
//

import Foundation
import simd
public protocol GridInput{
    var pos:SIMD3<Float> { get set }
    var normal:SIMD3<Float>{ get set }
    var color: SIMD4<Float>{ get set }
}
