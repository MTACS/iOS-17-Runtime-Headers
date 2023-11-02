
@interface CNKCallParticipantLabelDescriptorFactory : NSObject

@property (nonatomic, copy) id /* block */ organizationNameProvider;

- (id)init;
- (id)labelDescriptorWithStringsForCall:(id)arg1 callCount:(long long)arg2 alertAvailable:(bool)arg3 allowsDuration:(bool)arg4;
- (id)labelDescriptorWithStringsForCall:(id)arg1 callCount:(long long)arg2 callCenter:(id)arg3 alertAvailable:(bool)arg4 allowsDuration:(bool)arg5;
- (id)makeLabel;
- (id)makeLabelWithString:(id)arg1;
- (id /* block */)organizationNameProvider;
- (void)setOrganizationNameProvider:(id /* block */)arg1;

@end
