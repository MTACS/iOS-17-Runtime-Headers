
@interface CRKInterfaceOrientationMonitor : NSObject {
    unsigned long long  _interfaceOrientation;
    NSMutableArray * mCompletionBlocks;
    bool  mIsWaitingForFirstUpdate;
    FBSOrientationObserver * mObserver;
}

@property (nonatomic) unsigned long long interfaceOrientation;

- (void).cxx_destruct;
- (unsigned long long)DMFInterfaceOrientationFromBSInterfaceOrientation:(long long)arg1;
- (void)dealloc;
- (id)init;
- (unsigned long long)interfaceOrientation;
- (void)interfaceOrientationWithCompletion:(id /* block */)arg1;
- (id /* block */)makeUpdateHandler;
- (void)setInterfaceOrientation:(unsigned long long)arg1;
- (void)updateInterfaceOrientationWithBSOrientation:(long long)arg1;
- (void)updateInterfaceOrientationWithDMFOrientation:(unsigned long long)arg1;
- (void)updateInterfaceOrientationWithNotification:(id)arg1;

@end
