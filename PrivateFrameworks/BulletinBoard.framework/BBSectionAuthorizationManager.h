
@interface BBSectionAuthorizationManager : NSObject {
    <BBSectionAuthorizationManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _sectionIDsToAuthorizationExpiryTimers;
}

@property (nonatomic) <BBSectionAuthorizationManagerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_addNewTimerForSectionID:(id)arg1 withExpirationDate:(id)arg2;
- (void)_cancelExisitingTimerForSectionID:(id)arg1;
- (void)_queue_triggerDidFireForExpiryTimer:(id)arg1;
- (void)_replaceExisitingTimerForSectionID:(id)arg1 withExpirationDate:(id)arg2;
- (id)delegate;
- (id)handleChangeForSectionInfo:(id)arg1 replacingSectionInfo:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
