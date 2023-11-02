
@interface RPRemoteDisplayDevice : RPEndpoint <NSSecureCoding> {
    NSDictionary * _cameraCapabilities;
    NSObject<OS_dispatch_source> * _cameraCapabilitiesRefetchTimer;
    unsigned int  _flags;
    NSString * _persistentIdentifier;
}

@property (copy) NSDictionary *cameraCapabilities;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *cameraCapabilitiesRefetchTimer;
@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic, copy) NSString *persistentIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cameraCapabilities;
- (id)cameraCapabilitiesRefetchTimer;
- (void)clearCameraCapabilitiesRefetchTimer;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (id)persistentIdentifier;
- (void)setCameraCapabilities:(id)arg1;
- (void)setCameraCapabilitiesRefetchTimer:(id)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (unsigned int)updateWithEndpoint:(id)arg1;

@end
