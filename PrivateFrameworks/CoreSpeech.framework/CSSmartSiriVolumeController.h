
@interface CSSmartSiriVolumeController : NSObject <CSSmartSiriVolumeClientDelegate> {
    <CSSmartSiriVolumeControllerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    CSSmartSiriVolumeClient * _ssvClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSSmartSiriVolumeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) CSSmartSiriVolumeClient *ssvClient;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createSSVClientConnectionIfNeeded;
- (id)delegate;
- (void)didSmartSiriVolumeChangeForReason:(unsigned long long)arg1;
- (id)getVolumeForTTSType:(unsigned long long)arg1 withContext:(id)arg2;
- (id)init;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setPermanentVolumeOffsetWithDirection:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSmartSiriVolumeDirection:(bool)arg1;
- (void)setSmartSiriVolumePercentage:(float)arg1;
- (void)setSsvClient:(id)arg1;
- (id)ssvClient;

@end
