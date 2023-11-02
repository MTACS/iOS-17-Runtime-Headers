
@interface HMDCameraClipImporter : HMFObject <HMFLogging> {
    NSUUID * _cameraProfileUUID;
    HMBLocalZone * _localZone;
    NSString * _logIdentifier;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSUUID *cameraProfileUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) NSString *logIdentifier;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)cameraProfileUUID;
- (id)importClipsWithImportData:(id)arg1;
- (id)initWithLocalZone:(id)arg1 cameraProfileUUID:(id)arg2;
- (id)localZone;
- (id)logIdentifier;
- (id)workQueue;

@end
