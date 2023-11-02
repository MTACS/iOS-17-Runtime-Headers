
@interface NSLayoutYAxisAnchor : NSLayoutAnchor

// Image: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout

- (id)anchorByOffsettingWithConstant:(double)arg1;
- (id)anchorByOffsettingWithDimension:(id)arg1;
- (id)anchorByOffsettingWithDimension:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)anchorWithOffsetToAnchor:(id)arg1;
- (id)constraintEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintGreaterThanOrEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintLessThanOrEqualToSystemSpacingBelowAnchor:(id)arg1 multiplier:(double)arg2;
- (id)distanceTo:(id)arg1;
- (bool)isCompatibleWithAnchor:(id)arg1;
- (id)offsetBy:(double)arg1;
- (id)offsetByDimension:(id)arg1;
- (id)offsetByDimension:(id)arg1 times:(double)arg2 plus:(double)arg3;
- (id)offsetTo:(id)arg1;
- (bool)validateOtherAttribute:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls

- (id)mru_constraintEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3;
- (id)mru_constraintEqualToAnchor:(id)arg1 priority:(float)arg2;
- (id)mru_constraintGreaterThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3;
- (id)mru_constraintGreaterThanOrEqualToAnchor:(id)arg1 priority:(float)arg2;
- (id)mru_constraintLessThanOrEqualToAnchor:(id)arg1 constant:(double)arg2 priority:(float)arg3;
- (id)mru_constraintLessThanOrEqualToAnchor:(id)arg1 priority:(float)arg2;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)constraintEqualToSystemSpacingBelowAnchor:(id)arg1;
- (id)constraintGreaterThanOrEqualToSystemSpacingBelowAnchor:(id)arg1;
- (id)constraintLessThanOrEqualToSystemSpacingBelowAnchor:(id)arg1;

@end
