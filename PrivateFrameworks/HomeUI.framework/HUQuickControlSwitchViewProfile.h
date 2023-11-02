
@interface HUQuickControlSwitchViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFNumberValueConstraints *primaryValueConstraints;
@property (nonatomic, readonly) HFNumberValueConstraints *secondaryValueConstraints;
@property (readonly) Class superclass;

- (double)gestureDragCoefficient;
- (bool)hasSecondaryValue;
- (id)primaryValueConstraints;
- (id)secondaryValueConstraints;
- (bool)supportsTouchContinuation;

@end
