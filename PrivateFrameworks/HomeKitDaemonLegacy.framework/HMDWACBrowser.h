
@interface HMDWACBrowser : NSObject <HMDWACScannerDelegate, HMFLogging> {
    <HMDWACBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    HMFMessageDispatcher * _messageDispatcher;
    bool  _scanIsActive;
    NSMutableDictionary * _unassociatedAccessories;
    <HMDWACScanner> * _wacScanner;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDWACBrowserDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool scanIsActive;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)clearBackoff;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithWACScanner:(id)arg1 messageDispatcher:(id)arg2;
- (void)requestBackoff;
- (bool)scanIsActive;
- (void)scanner:(id)arg1 didAddDevice:(id)arg2;
- (void)scanner:(id)arg1 didError:(id)arg2;
- (void)scanner:(id)arg1 didRemoveDevice:(id)arg2;
- (void)scanner:(id)arg1 didUpdateDevice:(id)arg2;
- (void)scannerDidStop:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setScanIsActive:(bool)arg1;
- (void)startBrowsingForAccessories;
- (void)startBrowsingForAirPlayWACAccessoriesWithBrowser:(id)arg1;
- (void)stopBrowsingForAccessories;

@end
