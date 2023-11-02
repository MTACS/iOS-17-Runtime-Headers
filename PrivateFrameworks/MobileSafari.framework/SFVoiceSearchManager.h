
@interface SFVoiceSearchManager : NSObject {
    long long  _availability;
}

@property (nonatomic, readonly) long long availability;
@property (nonatomic, readonly) bool liveCompletionList;
@property (nonatomic, readonly) NSArray *queryItems;

+ (id)sharedManager;

- (id)_kfed;
- (void)_updateDictationAvailability;
- (long long)_voiceSearchAvailability;
- (long long)availability;
- (id)init;
- (bool)liveCompletionList;
- (bool)presentDictationDiscoveryAlertIfNeeded;
- (id)queryItems;

@end
