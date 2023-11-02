
@interface PLCapturePhotoSettings : PLAbstractEncodableObject <PLCapturePhotoSettings> {
    AVCaptureDeferredPhotoSettings * _photoSettings;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) AVCaptureDeferredPhotoSettings *photoSettings;
@property (readonly) Class superclass;

+ (id)photoSettingsWithPhotoSettings:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhotoSettings:(id)arg1;
- (id)photoSettings;
- (void)setPhotoSettings:(id)arg1;

@end
