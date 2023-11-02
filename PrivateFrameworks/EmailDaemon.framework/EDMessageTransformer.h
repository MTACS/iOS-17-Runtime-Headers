
@interface EDMessageTransformer : NSObject <EFLoggable> {
    EMBlockedSenderManager * _blockedSenderManager;
    EDMailboxProvider * _mailboxProvider;
    <EMUserProfileProvider> * _userProfileProvider;
    <EMVIPReader> * _vipReader;
}

@property (nonatomic, readonly) EMBlockedSenderManager *blockedSenderManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDMailboxProvider *mailboxProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <EMUserProfileProvider> *userProfileProvider;
@property (nonatomic, readonly) <EMVIPReader> *vipReader;

+ (id)log;
+ (id)mailboxesForPersistedMessage:(id)arg1 mailboxProvider:(id)arg2;

- (void).cxx_destruct;
- (id)_transformBaseMessage:(id)arg1 mailboxScope:(id)arg2 duplicateInfo:(id)arg3 loaderBlock:(id /* block */)arg4;
- (id)blockedSenderManager;
- (id)initWithMailboxProvider:(id)arg1 userProfileProvider:(id)arg2 blockedSenderManager:(id)arg3 vipReader:(id)arg4;
- (id)mailboxProvider;
- (id)transformBaseMessage:(id)arg1 mailboxScope:(id)arg2 loaderBlock:(id /* block */)arg3;
- (id)transformPersistedMessages:(id)arg1 mailboxScope:(id)arg2;
- (id)userProfileProvider;
- (id)vipReader;

@end
