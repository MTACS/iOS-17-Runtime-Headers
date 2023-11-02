
@interface AMSKeybag : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    AMSFairPlayContext * _fairPlayContext;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) AMSFairPlayContext *fairPlayContext;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)dispatchQueue;
- (id)fairPlayContext;
- (unsigned int)fairplayContextWithError:(id*)arg1;
- (bool)importDiversityBagWithData:(id)arg1 error:(id*)arg2;
- (bool)importKeybagData:(id)arg1 outError:(id*)arg2;
- (bool)importKeybagWithData:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)keybagSyncData:(id)arg1 transactionType:(unsigned int)arg2 outError:(id*)arg3;
- (id)keybagSyncDataWithAccountID:(id)arg1 transactionType:(unsigned int)arg2 error:(id*)arg3;
- (id)kybsyncData:(id)arg1 transationType:(unsigned int)arg2 error:(id*)arg3;
- (void)resetContext;
- (void)setDispatchQueue:(id)arg1;
- (void)setFairPlayContext:(id)arg1;

@end
