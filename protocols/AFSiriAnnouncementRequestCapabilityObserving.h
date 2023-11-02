
@protocol AFSiriAnnouncementRequestCapabilityObserving <NSObject>

@required

- (void)availableAnnouncementRequestTypesChanged:(unsigned long long)arg1 onPlatform:(long long)arg2;
- (void)eligibleAnnouncementRequestTypesChanged:(unsigned long long)arg1 onPlatform:(long long)arg2;

@end
