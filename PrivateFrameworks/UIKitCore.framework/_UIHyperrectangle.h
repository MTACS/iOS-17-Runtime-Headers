
@interface _UIHyperrectangle : NSObject <NSCopying, NSSecureCoding, SBDebuggableUIHyperregion, _UIHyperregion, _UIHyperregion_Internal> {
    unsigned long long  __dimensions;
    double * __maximumPoint;
    double * __minimumPoint;
}

@property (nonatomic, readonly) unsigned long long _dimensions;
@property (nonatomic, readonly) const double*_maximumPoint;
@property (nonatomic, readonly) const double*_minimumPoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sb_debugFrame;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)keyPathsForValuesAffectingSelf;
+ (bool)supportsSecureCoding;

- (void)_closestPoint:(double*)arg1 toPoint:(const double*)arg2;
- (unsigned long long)_dimensions;
- (const double*)_maximumPoint;
- (const double*)_minimumPoint;
- (void)_mutateMaximumPoint:(id /* block */)arg1;
- (void)_mutateMinimumPoint:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sb_debugFrame;
- (struct CGSize { double x1; double x2; })sb_debugSize;

@end
