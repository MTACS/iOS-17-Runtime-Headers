
@interface PLSpatialOverCaptureInformation : NSObject {
    NSString * _spatialOverCaptureGroupIdentifier;
    NSString * _spatialOverCaptureLivePhotoPairingIdentifier;
}

@property (nonatomic, copy) NSString *spatialOverCaptureGroupIdentifier;
@property (nonatomic, copy) NSString *spatialOverCaptureLivePhotoPairingIdentifier;

- (void).cxx_destruct;
- (void)setSpatialOverCaptureGroupIdentifier:(id)arg1;
- (void)setSpatialOverCaptureLivePhotoPairingIdentifier:(id)arg1;
- (id)spatialOverCaptureGroupIdentifier;
- (id)spatialOverCaptureLivePhotoPairingIdentifier;

@end
