
@protocol CoalescableMicroGamepad <NSObject>

@required

- (long long)deviceType;
- (unsigned long long)owner;
- (bool)ownershipClaimingElementsZero;
- (void)setDeviceType:(long long)arg1;
- (void)setOwner:(unsigned long long)arg1;

@end
