
@protocol AFAnnouncementRequestCapabilityProviding <NSObject>

@required

+ (NSArray *)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;
+ (long long)platform;
+ (<AFAnnouncementRequestCapabilityProviding> *)provider;
+ (NSArray *)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)arg1;

- (void)addDelegate:(id <AFAnnouncementRequestCapabilityProvidingDelegate>)arg1;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, void*
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;

@end
