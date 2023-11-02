
@interface IMSuggestionsService : NSObject {
    NSCache * _cache;
    NSObject<SGSuggestionsServiceContactsProtocol> * _connection;
    NSHashTable * _handlesToRetry;
    NSDictionary * _localTable;
    id  _newContactNotificationToken;
    struct __CFRunLoopObserver { } * _notificationObserver;
    NSMutableDictionary * _pending;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_contactForSGContactMatch:(id)arg1;
- (bool)_maybeEmailAddress:(id)arg1;
- (bool)_maybePhoneNumber:(id)arg1;
- (void)_startRequestForDisplayName:(id)arg1 messageUID:(id)arg2 queue:(id)arg3;
- (void)_startRequestForDisplayNameCallbackWithSuggestedName:(id)arg1 displayName:(id)arg2 queue:(id)arg3;
- (void)dealloc;
- (id)fetchCNContactForSuggestedHandle:(id)arg1;
- (void)fetchSuggestedRealNameForDisplayName:(id)arg1 messageUID:(id)arg2 queue:(id)arg3 block:(id /* block */)arg4;
- (id)init;
- (bool)isBusiness:(id)arg1;
- (id)personNameComponentsForHandle:(id)arg1;
- (void)scheduleFetchIfNecessaryForHandle:(id)arg1;
- (id)serviceConnection;
- (void)startUsingLocalLookupsWithTable:(id)arg1;
- (void)stopUsingLocalLookups;
- (id)suggestedNameFromCache:(id)arg1 wasFound:(bool*)arg2;

@end
