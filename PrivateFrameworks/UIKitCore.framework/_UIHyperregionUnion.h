
@interface _UIHyperregionUnion : NSObject <NSCopying, NSSecureCoding, SBDebuggableUIHyperregion, _UIHyperregion, _UIHyperregion_Internal> {
    unsigned long long  __dimensions;
    NSArray * __regions;
    double * __temp;
}

@property (nonatomic, readonly) unsigned long long _dimensions;
@property (setter=_setRegions:, nonatomic, copy) NSArray *_regions;
@property (nonatomic, readonly) double*_temp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sb_debugFrame;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)keyPathsForValuesAffectingSelf;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2;
- (unsigned long long)_dimensions;
- (bool)_isBoundaryCrossedFromPoint:(const double*)arg1 toPoint:(const double*)arg2;
- (unsigned long long)_regionIndexForClosestPoint:(double*)arg1 toPoint:(const double*)arg2;
- (id)_regions;
- (void)_setRegions:(id)arg1;
- (double*)_temp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sb_debugFrame;

@end
