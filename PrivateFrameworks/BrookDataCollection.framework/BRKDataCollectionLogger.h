
@interface BRKDataCollectionLogger : NSObject {
    NSDateFormatter * _dateFormatter;
    NSString * _externalDailyDeviceIdentifier;
    unsigned long long  _externalDailySessionUploadCount;
    NSMutableArray * _idsFilesList;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _storageDirectory;
    BRKDataCollectionScheduler * _uploadScheduler;
}

@property (nonatomic, readonly) NSString *deviceIdentifier;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_dataCollectionEnabled;
- (bool)_dataCollectionIsAllowedToRunInCurrentProcess;
- (id)_deviceIdentifier;
- (void)_forceUpload;
- (id)_idsFileListPath;
- (id)_init;
- (id)_internalDeviceIdentifier;
- (void)_logUploadWithPath:(id)arg1;
- (id)_pathExtension:(id)arg1;
- (void)_purgeFilesForOSUpdate;
- (void)_purgeOutdatedFiles;
- (void)_refreshExternalDeviceMetadata;
- (void)_scheduleUploadTimer;
- (bool)_shouldAllowDataCollectionUpload;
- (id)_stringByRemovingPathExtension:(id)arg1;
- (void)_triggerUpload:(bool)arg1;
- (void)clearCollectedData;
- (void)dealloc;
- (id)deviceIdentifier;
- (id)markFileForUpload:(id)arg1;

@end
