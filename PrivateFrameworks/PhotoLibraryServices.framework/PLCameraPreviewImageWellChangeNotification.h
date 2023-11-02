
@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {
    UIImage * _image;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSString *assetUUID;
@property (nonatomic, readonly) UIImage *image;

+ (id)notification;

- (void).cxx_destruct;
- (id)_init;
- (id)assetUUID;
- (id)description;
- (id)image;
- (id)init;
- (id)name;
- (id)object;
- (id)userInfo;

@end
