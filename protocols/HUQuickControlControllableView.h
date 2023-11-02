
@protocol HUQuickControlControllableView <NSObject>

@required

- (id)initWithProfile:(HUQuickControlViewProfile *)arg1;
- (HUIntrinsicSizeDescriptor *)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (HUQuickControlViewProfile *)profile;
- (void)setProfile:(HUQuickControlViewProfile *)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@optional

- (unsigned long long)reachabilityState;
- (id)secondaryValue;
- (void)setReachabilityState:(unsigned long long)arg1;
- (void)setSecondaryValue:(id)arg1;

@end
