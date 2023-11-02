
@interface HMDMultiUserStatusController : HMFObject <HMFLogging> {
    unsigned long long  _dataSyncState;
    <HMDMultiUserStatusControllerDelegate> * _delegate;
    unsigned long long  _haveActiveSignedInAccount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _multiUserState;
    NSObject<OS_dispatch_queue> * _queue;
}

@property unsigned long long dataSyncState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDMultiUserStatusControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long haveActiveSignedInAccount;
@property long long multiUserState;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (unsigned long long)dataSyncState;
- (id)delegate;
- (void)didChangeHasActiveAccountState:(bool)arg1;
- (void)didUpdateDataSyncState:(unsigned long long)arg1;
- (unsigned long long)haveActiveSignedInAccount;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (long long)multiUserState;
- (id)queue;
- (void)setDataSyncState:(unsigned long long)arg1;
- (void)setHaveActiveSignedInAccount:(unsigned long long)arg1;
- (void)setMultiUserState:(long long)arg1;

@end
