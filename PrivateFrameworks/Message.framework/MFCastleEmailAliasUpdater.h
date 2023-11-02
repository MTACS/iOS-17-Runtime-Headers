
@interface MFCastleEmailAliasUpdater : NSObject {
    NSString * _accountID;
    EDiCloudAliasSupport * _aliasSupport;
    bool  _isRunning;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _requestCount;
}

- (void).cxx_destruct;
- (void)getEmailAddressAndAliasesWithLastSyncDate:(id)arg1 entityTag:(id)arg2 handler:(id /* block */)arg3;
- (id)initWithAccountID:(id)arg1 aliasSupport:(id)arg2;

@end
