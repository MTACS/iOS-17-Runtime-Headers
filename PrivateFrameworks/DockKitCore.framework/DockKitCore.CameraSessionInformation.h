
@interface DockKitCore.CameraSessionInformation : NSObject <NSCopying, NSSecureCoding> {
    void appId;
    void azimuth;
    void cameraType;
    void endTime;
    void startTime;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
