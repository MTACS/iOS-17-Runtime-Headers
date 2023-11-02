
@interface HMDCameraRecordingSessionVariantFragmentManager : HMFObject <HMFLogging> {
    <HMDCameraRecordingSessionVariantFragmentManagerDelegate> * _delegate;
    NSMutableArray * _fullFragmentTimeRanges;
    NSString * _logIdentifier;
    NSMutableArray * _variantFragments;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDCameraRecordingSessionVariantFragmentManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) bool expectsVariantFragment;
@property (readonly) NSMutableArray *fullFragmentTimeRanges;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) Class superclass;
@property (readonly) NSMutableArray *variantFragments;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_drainVariantFragmentQueue;
- (id)delegate;
- (bool)expectsVariantFragment;
- (id)fullFragmentTimeRanges;
- (void)handleFullFragment:(id)arg1;
- (void)handleVariantFragment:(id)arg1;
- (id)initWithLogIdentifier:(id)arg1;
- (id)logIdentifier;
- (void)setDelegate:(id)arg1;
- (id)variantFragments;

@end
