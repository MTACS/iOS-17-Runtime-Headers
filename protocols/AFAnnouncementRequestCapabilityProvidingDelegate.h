
@protocol AFAnnouncementRequestCapabilityProvidingDelegate

@required

- (void)provider:(id <AFAnnouncementRequestCapabilityProviding>)arg1 availableAnnouncementRequestTypesChanged:(unsigned long long)arg2;
- (void)provider:(id <AFAnnouncementRequestCapabilityProviding>)arg1 eligibleAnnouncementRequestTypesChanged:(unsigned long long)arg2;

@end
