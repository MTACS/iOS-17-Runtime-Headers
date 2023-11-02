
@interface CAMExternalStorage : NSObject <CAMStorageContainer> {
    NSURL * __baseURL;
    AVExternalStorageDevice * __underlyingStorageDevice;
    <CAMPurgeableStorageContainerDelegate> * _delegate;
    NSString * _displayName;
    CAMCaptureGraphConfiguration * _graphConfiguration;
    bool  _notRecommendedForCaptureUse;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) NSURL *_baseURL;
@property (nonatomic, readonly) AVExternalStorageDevice *_underlyingStorageDevice;
@property (nonatomic, readonly) bool connected;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMPurgeableStorageContainerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, retain) CAMCaptureGraphConfiguration *graphConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool notRecommendedForCaptureUse;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long totalFreeBytes;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (id)_baseURL;
- (id)_underlyingStorageDevice;
- (double)availableRecordingTimeInSecondsForGraphConfiguration:(id)arg1;
- (bool)connected;
- (id)delegate;
- (id)description;
- (id)displayName;
- (id)generateDestinationURLForMode:(long long)arg1;
- (id)graphConfiguration;
- (bool)hasDiskSpaceToAllowCaptureWithConfiguration:(id)arg1 allowPurging:(bool)arg2;
- (bool)hasDiskSpaceToAllowCaptureWithConfiguration:(id)arg1 allowPurging:(bool)arg2 verbose:(bool)arg3;
- (id)initWithNoDevice;
- (id)initWithStorageDevice:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)minimumDiskUsageThresholdInBytesForGraphConfiguration:(id)arg1;
- (bool)notRecommendedForCaptureUse;
- (void)setDelegate:(id)arg1;
- (void)setGraphConfiguration:(id)arg1;
- (long long)totalFreeBytes;
- (id)uniqueIdentifier;

@end
