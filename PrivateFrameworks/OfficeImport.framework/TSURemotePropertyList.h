
@interface TSURemotePropertyList : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _checkQueue;
    bool  _didUpdateAtLeastOnce;
    NSURL * _localURL;
    NSDictionary * _propertyList;
    NSURL * _remoteURL;
    NSObject<OS_dispatch_source> * _updateTimer;
}

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)URLRequest;
- (id)arrayForKey:(id)arg1;
- (void)checkForUpdateWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)deserializePropertyListData:(id)arg1 error:(out id*)arg2;
- (id)dictionaryForKey:(id)arg1;
- (id)init;
- (id)initWithRemoteURL:(id)arg1 localURL:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)processDidResume:(id)arg1;
- (void)processPropertyList:(id)arg1;
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)processWillSuspend:(id)arg1;
- (void)startUpdateTimer;
- (id)stringForKey:(id)arg1;
- (double)timeIntervalUntilNextUpdate;
- (void)updateIfNeededWithCompletionHandler:(id /* block */)arg1;
- (id)validateUserDefaultsDownloadURL:(id)arg1;

@end
