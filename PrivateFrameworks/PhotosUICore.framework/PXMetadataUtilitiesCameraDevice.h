
@interface PXMetadataUtilitiesCameraDevice : NSObject {
    NSString * _displayName;
    NSNumber * _focalLength;
    NSNumber * _focalLengthIn35mm;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSNumber *focalLength;
@property (nonatomic, readonly) NSNumber *focalLengthIn35mm;

+ (id)cameraForFocalLength:(id)arg1 deviceName:(id)arg2;
+ (id)supportedDevices;

- (void).cxx_destruct;
- (id)displayName;
- (id)focalLength;
- (id)focalLengthIn35mm;
- (id)init;
- (id)initWithDisplayName:(id)arg1 focalLength:(id)arg2 focalLengthIn35mm:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
