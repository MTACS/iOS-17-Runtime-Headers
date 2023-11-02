
@interface STYSignpostsMonitorHelper : NSObject {
    bool  _isEnabled;
    NSObject<OS_os_transaction> * _osTransaction;
    NSObject<OS_dispatch_queue> * _processingQueue;
    bool  _shouldBeEnabled;
}

@property (readonly) SignpostSupportSubsystemCategoryAllowlist *allowList;
@property bool isEnabled;
@property (readonly) NSString *name;
@property (retain) NSObject<OS_os_transaction> *osTransaction;
@property (retain) NSObject<OS_dispatch_queue> *processingQueue;
@property bool shouldBeEnabled;

- (void).cxx_destruct;
- (id)allowList;
- (void)didEndMonitoring;
- (void)handleEmit:(id)arg1;
- (void)handleInterval:(id)arg1;
- (void)handleIntervalBegin:(id)arg1;
- (id)init;
- (bool)isEnabled;
- (id)name;
- (bool)needsEnablementChange;
- (id)osTransaction;
- (id)processingQueue;
- (void)resetState;
- (void)setIsEnabled:(bool)arg1;
- (void)setOsTransaction:(id)arg1;
- (void)setProcessingQueue:(id)arg1;
- (void)setShouldBeEnabled:(bool)arg1;
- (bool)shouldBeEnabled;
- (void)takeTransaction;
- (bool)wantsAnimationFrameRate;
- (void)willStartMonitoring;

@end
