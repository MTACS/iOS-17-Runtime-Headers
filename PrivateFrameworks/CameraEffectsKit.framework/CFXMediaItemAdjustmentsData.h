
@interface CFXMediaItemAdjustmentsData : NSObject <NSSecureCoding> {
    long long  _cameraMode;
    long long  _cameraPosition;
    NSArray * _effectStack;
    NSURL * _metadataURL;
}

@property (nonatomic, readonly) long long cameraMode;
@property (nonatomic, readonly) long long cameraPosition;
@property (nonatomic, readonly) NSArray *effectStack;
@property (nonatomic, readonly) NSURL *metadataURL;

+ (id)secureCodingClassWhitelist;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)cameraMode;
- (long long)cameraPosition;
- (id)effectStack;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCameraMode:(long long)arg1 metadataURL:(id)arg2 cameraPosition:(long long)arg3 effectStack:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)metadataURL;

@end
