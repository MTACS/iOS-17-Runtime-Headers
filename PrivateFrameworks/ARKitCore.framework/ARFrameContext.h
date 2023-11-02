
@interface ARFrameContext : NSObject <ARDaemonSecureCoding, ARResultDataContext> {
    NSMutableArray * _anchorsToAdd;
    NSMutableArray * _anchorsToRemove;
    NSMutableArray * _anchorsToStopTracking;
    NSSet * _collaborationData;
    bool  _didRelocalize;
    unsigned long long  _frameDebugOptions;
    NSUUID * _identifier;
    ARImageData * _imageData;
    ARLocationData * _locationData;
    ARDeviceOrientationData * _orientationData;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _relocalizationDeltaTransform;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _sessionTransform;
    bool  _sessionTransformReset;
    bool  _sessionTransformShouldResumeCameraHeading;
    bool  _sessionTransformShouldResumeCameraPosition;
    bool  _sessionTransformUpdated;
    long long  _worldAlignment;
    ARWorldMap * _worldMap;
}

@property (nonatomic, readonly, copy) NSArray *anchorsToAdd;
@property (nonatomic, readonly, copy) NSArray *anchorsToRemove;
@property (nonatomic, readonly, copy) NSArray *anchorsToStopTracking;
@property (nonatomic, copy) NSSet *collaborationData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRelocalize;
@property (nonatomic) unsigned long long frameDebugOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ARImageData *imageData;
@property (nonatomic, retain) ARLocationData *locationData;
@property (nonatomic, retain) ARDeviceOrientationData *orientationData;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } relocalizationDeltaTransform;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } sessionTransform;
@property (nonatomic, readonly) bool sessionTransformReset;
@property (nonatomic, readonly) bool sessionTransformShouldResumeCameraHeading;
@property (nonatomic, readonly) bool sessionTransformShouldResumeCameraPosition;
@property (nonatomic, readonly) bool sessionTransformUpdated;
@property (readonly) Class superclass;
@property (nonatomic) long long worldAlignment;
@property (nonatomic, retain) ARWorldMap *worldMap;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAnchor:(id)arg1;
- (id)anchorsToAdd;
- (id)anchorsToRemove;
- (id)anchorsToStopTracking;
- (long long)cameraPosition;
- (void)clearAddedAnchors;
- (id)collaborationData;
- (id)description;
- (bool)didRelocalize;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameDebugOptions;
- (unsigned long long)hash;
- (id)imageData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locationData;
- (id)orientationData;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })relocalizationDeltaTransform;
- (void)removeAnchor:(id)arg1;
- (void)resetSessionTransform;
- (id)resultDataOfClass:(Class)arg1;
- (void)resumeSessionCameraPosition;
- (void)resumeSessionCameraPositionAndHeading;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })sessionTransform;
- (bool)sessionTransformReset;
- (bool)sessionTransformShouldResumeCameraHeading;
- (bool)sessionTransformShouldResumeCameraPosition;
- (bool)sessionTransformUpdated;
- (void)setAnchorsToAdd:(id)arg1;
- (void)setAnchorsToRemove:(id)arg1;
- (void)setAnchorsToStopTracking:(id)arg1;
- (void)setCollaborationData:(id)arg1;
- (void)setDidRelocalize:(bool)arg1;
- (void)setFrameDebugOptions:(unsigned long long)arg1;
- (void)setImageData:(id)arg1;
- (void)setLocationData:(id)arg1;
- (void)setOrientationData:(id)arg1;
- (void)setRelocalizationDeltaTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setSessionTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setSessionTransformReset:(bool)arg1;
- (void)setSessionTransformUpdated:(bool)arg1;
- (void)setWorldAlignment:(long long)arg1;
- (void)setWorldMap:(id)arg1;
- (void)stopTrackingAnchors:(id)arg1;
- (long long)worldAlignment;
- (id)worldMap;

@end
