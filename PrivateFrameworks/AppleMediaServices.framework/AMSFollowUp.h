
@interface AMSFollowUp : NSObject {
    FLFollowUpController * _followUpController;
    NSObject<OS_dispatch_queue> * _followUpQueue;
}

@property (nonatomic, retain) FLFollowUpController *followUpController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *followUpQueue;

- (void).cxx_destruct;
- (id)_pendingFollowUpWithBackingIdentifier:(id)arg1 error:(id*)arg2;
- (id)clearFollowUpItem:(id)arg1;
- (id)clearFollowUpWithBackingIdentifier:(id)arg1;
- (id)clearFollowUpWithIdentifier:(id)arg1 account:(id)arg2;
- (id)followUpController;
- (id)followUpQueue;
- (id)init;
- (id)pendingFollowUpWithIdentifier:(id)arg1 account:(id)arg2;
- (id)pendingFollowUps;
- (id)pendingFollowUpsForAccount:(id)arg1;
- (id)postFollowUpItem:(id)arg1;
- (void)setFollowUpController:(id)arg1;
- (void)setFollowUpQueue:(id)arg1;

@end