
@interface OZARFrameMetadata : OZARMetadata <NSSecureCoding> {
    struct CGSize { 
        double width; 
        double height; 
    }  _cameraImageResolution;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _cameraIntrinsics;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraTransform;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cameraImageResolution;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } cameraIntrinsics;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraTransform;

+ (struct opaqueCMFormatDescription { }*)metadataFormat;
+ (id)metadataItemIdentifier;
+ (bool)supportsSecureCoding;

- (struct CGSize { double x1; double x2; })cameraImageResolution;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })cameraIntrinsics;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransform;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 cameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg2 cameraImageResolution:(struct CGSize { double x1; double x2; })arg3;
- (id)initWithCoder:(id)arg1;
- (void)setCameraImageResolution:(struct CGSize { double x1; double x2; })arg1;
- (void)setCameraIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

@end
