
@interface IMDRecentsController : NSObject {
    NSMutableDictionary * _activeDeviceForHandle;
    NSMutableDictionary * _typingContext;
    IMTimer * _typingContextTimer;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)__pruneTypingContexts;
- (void)_setTimerForPruningTypingContext;
- (id)activeDeviceForHandle:(id)arg1;
- (bool)hasRecentlyMessaged:(id)arg1;
- (void)noteRecentMessageForPeople:(id)arg1;
- (void)updateLatestActiveDestination:(id)arg1 ForHandle:(id)arg2 incomingType:(unsigned char)arg3;

@end
