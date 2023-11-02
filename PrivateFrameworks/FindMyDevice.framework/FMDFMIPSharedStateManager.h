
@interface FMDFMIPSharedStateManager : NSObject {
    NSURL * _fmipSharedFileStaticURL;
    NSObject<OS_dispatch_queue> * _stateManagerQueue;
}

@property (retain) NSURL *fmipSharedFileStaticURL;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateManagerQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_fmipSharedFileURL;
- (id)_readSharedInfo;
- (bool)_removeSharedInfo;
- (bool)_writeSharedInfo:(id)arg1;
- (bool)fmipActive;
- (id)fmipSharedFileStaticURL;
- (id)init;
- (unsigned long long)lostModeType;
- (void)recalculateLostMode;
- (void)setFMiPActive:(bool)arg1;
- (void)setFmipSharedFileStaticURL:(id)arg1;
- (void)setStateManagerQueue:(id)arg1;
- (id)stateManagerQueue;

@end
