
@interface TSDIOKServiceMatcher : NSObject {
    NSString * _identifier;
    IOKMatchingNotification * _matchNotification;
    NSMutableSet * _matchedEntryIDs;
    IOKMatchingNotification * _terminateNotification;
}

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)getMatchedCount;
- (void)handleServiceMatched:(id)arg1;
- (void)handleServiceTerminated:(id)arg1;
- (id)init;
- (void)serviceMatched:(id)arg1;
- (void)serviceTerminated:(id)arg1;
- (bool)startNotificationsWithMatchingDictionary:(id)arg1;

@end
