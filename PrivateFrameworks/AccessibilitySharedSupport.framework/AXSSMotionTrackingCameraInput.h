
@interface AXSSMotionTrackingCameraInput : AXSSMotionTrackingInput {
    NSString * _captureDeviceUniqueID;
    bool  _isBuiltIn;
    NSString * _name;
}

@property (nonatomic, copy) NSString *captureDeviceUniqueID;
@property (nonatomic) bool isBuiltIn;
@property (nonatomic, copy) NSString *name;

+ (id)captureDeviceForMotionTrackingInput:(id)arg1;
+ (id)motionTrackingCameraInputWithAVCaptureDevice:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)captureDeviceUniqueID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCaptureDeviceUniqueID:(id)arg1 name:(id)arg2 isBuiltIn:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlistDictionary:(id)arg1;
- (bool)isBuiltIn;
- (bool)isCamera;
- (id)name;
- (id)plistDictionary;
- (void)setCaptureDeviceUniqueID:(id)arg1;
- (void)setIsBuiltIn:(bool)arg1;
- (void)setName:(id)arg1;
- (bool)supportsExpressions;
- (unsigned long long)trackingType;
- (id)uniqueIdentifier;

@end
