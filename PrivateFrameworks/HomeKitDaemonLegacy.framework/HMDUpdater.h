
@interface HMDUpdater : HMFObject <HMFLogging> {
    NSBackgroundActivityScheduler * _backgroundScheduler;
    NSString * _buildid;
    NSString * _currentKitUUID;
    bool  _internal;
    NSString * _model;
    NSString * _platformString;
    NSString * _targetKitDateString;
    NSString * _targetKitURLString;
    NSString * _targetKitUUID;
}

@property (nonatomic, retain) NSBackgroundActivityScheduler *backgroundScheduler;
@property (nonatomic, retain) NSString *buildid;
@property (nonatomic, retain) NSString *currentKitUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool internal;
@property (nonatomic, retain) NSString *model;
@property (nonatomic, retain) NSString *platformString;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *targetKitDateString;
@property (nonatomic, retain) NSString *targetKitURLString;
@property (nonatomic, retain) NSString *targetKitUUID;

+ (void)initialize;
+ (id)logCategory;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)_clean;
- (void)_clearInstalledRootUUID;
- (int)_download;
- (id)_downloadURL;
- (int)_executeScript:(const char *)arg1;
- (void)_fetchManifestWithCompletion:(id /* block */)arg1;
- (void)_handleServerResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (void)_info;
- (int)_install;
- (int)_reboot;
- (int)_rebuild;
- (void)_scheduleUpdateCheck;
- (int)_uninstall;
- (id)backgroundScheduler;
- (id)buildid;
- (id)currentKitUUID;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)internal;
- (id)logIdentifier;
- (id)model;
- (id)platformString;
- (void)setBackgroundScheduler:(id)arg1;
- (void)setBuildid:(id)arg1;
- (void)setCurrentKitUUID:(id)arg1;
- (void)setInternal:(bool)arg1;
- (void)setModel:(id)arg1;
- (void)setPlatformString:(id)arg1;
- (void)setTargetKitDateString:(id)arg1;
- (void)setTargetKitURLString:(id)arg1;
- (void)setTargetKitUUID:(id)arg1;
- (id)targetKitDateString;
- (id)targetKitURLString;
- (id)targetKitUUID;
- (void)updateWithCompletion:(id /* block */)arg1;

@end
