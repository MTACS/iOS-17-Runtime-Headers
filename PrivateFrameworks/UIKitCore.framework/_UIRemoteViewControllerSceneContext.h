
@interface _UIRemoteViewControllerSceneContext : NSObject <NSCopying, NSSecureCoding> {
    FBSDisplayIdentity * _displayIdentity;
    bool  _enhancedWindowingEnabled;
    bool  _isCapturingContentForAdditionalRenderingDestination;
    long long  _screenReferenceDisplayModeStatus;
    double  _systemReferenceAngle;
    unsigned long long  _systemReferenceAngleMode;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayIdentity:(id)arg1 screenReferenceDisplayModeStatus:(long long)arg2 enhancedWindowEnabled:(bool)arg3 systemReferenceAngle:(double)arg4 systemReferenceAngleMode:(unsigned long long)arg5 isCapturingContentForAdditionalRenderingDestination:(bool)arg6;
- (bool)isEqual:(id)arg1;

@end
