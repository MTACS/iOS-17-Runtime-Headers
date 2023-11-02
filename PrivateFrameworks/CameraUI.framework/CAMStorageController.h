
@interface CAMStorageController : NSObject <CAMStorageContainer> {
    <CAMStorageContainer> * __currentStorage;
    CAMInternalStorage * __internalStorage;
    <CAMPurgeableStorageContainerDelegate> * _delegate;
    CAMExternalStorage * _externalStorage;
    CAMCaptureGraphConfiguration * _graphConfiguration;
}

@property (setter=_setCurrentStorage:, nonatomic, retain) <CAMStorageContainer> *_currentStorage;
@property (nonatomic, readonly) CAMInternalStorage *_internalStorage;
@property (nonatomic, readonly) bool _isUsingExternalStorage;
@property (nonatomic, readonly) bool _isUsingInternalStorage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMPurgeableStorageContainerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CAMExternalStorage *externalStorage;
@property (nonatomic, retain) CAMCaptureGraphConfiguration *graphConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CAMPurgeableStorageContainer> *purgeableStorageContainer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long totalFreeBytes;

- (void).cxx_destruct;
- (id)_currentStorage;
- (id)_internalStorage;
- (bool)_isUsingExternalStorage;
- (bool)_isUsingInternalStorage;
- (void)_setCurrentStorage:(id)arg1;
- (void)_updateGraphConfigurationOnCurrentStorage;
- (void)_updateStorageDelegates;
- (double)availableRecordingTimeInSecondsForGraphConfiguration:(id)arg1;
- (id)delegate;
- (id)externalStorage;
- (id)graphConfiguration;
- (bool)hasDiskSpaceToAllowCaptureWithConfiguration:(id)arg1 allowPurging:(bool)arg2;
- (bool)hasDiskSpaceToAllowCaptureWithConfiguration:(id)arg1 allowPurging:(bool)arg2 verbose:(bool)arg3;
- (id)init;
- (long long)minimumDiskUsageThresholdInBytesForGraphConfiguration:(id)arg1;
- (id)purgeableStorageContainer;
- (void)setDelegate:(id)arg1;
- (void)setExternalStorage:(id)arg1;
- (void)setGraphConfiguration:(id)arg1;
- (long long)totalFreeBytes;

@end
