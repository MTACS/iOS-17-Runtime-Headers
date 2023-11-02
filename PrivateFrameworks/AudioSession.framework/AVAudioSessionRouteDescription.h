
@interface AVAudioSessionRouteDescription : NSObject {
    void * _impl;
}

@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) NSArray *outputs;
@property (readonly) unsigned long long siriInputSource;
@property (readonly) NSString *siriRemoteInputIdentifier;
@property (readonly) bool supportsDoAP;
@property (readonly) bool supportsSoftwareVolume;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithRawDescription:(id)arg1 owningSession:(id)arg2;
- (id)inputs;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRoute:(id)arg1;
- (id)outputs;
- (struct RouteDescriptionImpl { id x1; id x2; id x3; unsigned long long x4; bool x5; bool x6; }*)privateGetImplementation;
- (unsigned long long)siriInputSource;
- (id)siriRemoteInputIdentifier;
- (bool)supportsDoAP;
- (bool)supportsSoftwareVolume;
- (void)updateOutputPortsWithSpatialAudioStatus:(bool)arg1;

@end
