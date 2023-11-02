
@interface MTRCommissionableBrowser : NSObject {
    struct CommissionableBrowserInternal { 
        int (**_vptr$CommissioningResolveDelegate)(); 
        int (**_vptr$DnssdBrowseDelegate)(); 
        int (**_vptr$BleScannerDelegate)(); 
        NSObject<OS_dispatch_queue> *mDispatchQueue; 
        <MTRCommissionableBrowserDelegate> *mDelegate; 
        MTRDeviceController *mController; 
        NSMutableDictionary *mDiscoveredResults; 
    }  _browser;
    MTRDeviceController * _controller;
    <MTRCommissionableBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) struct CommissionableBrowserInternal { int (**x1)(); int (**x2)(); int (**x3)(); id x4; id x5; id x6; id x7; } browser;
@property (nonatomic, readonly) MTRDeviceController *controller;
@property (nonatomic, readonly) <MTRCommissionableBrowserDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CommissionableBrowserInternal { int (**x1)(); int (**x2)(); int (**x3)(); id x4; id x5; id x6; id x7; })browser;
- (id)controller;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 controller:(id)arg2 queue:(id)arg3;
- (id)queue;
- (void)setBrowser:(struct CommissionableBrowserInternal { int (**x1)(); int (**x2)(); int (**x3)(); id x4; id x5; id x6; id x7; })arg1;
- (void)setQueue:(id)arg1;
- (bool)start;
- (bool)stop;

@end
