
@interface AREnvironmentProbeManager : NSObject {
    NSMutableArray * _anchorsToRemove;
    ARCubemapGenerator * _cubemapGenerator;
    AREnvironmentProbeUpdate * _currentProbeUpdate;
    NSMutableArray * _directTexturingIdentifiers;
    NSMutableArray * _initialProbeIdentifiers;
    bool  _isReady;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _lastCameraTransform;
    ARImageData * _lastImageData;
    struct vector<ARTexturedPlane, std::allocator<ARTexturedPlane>> { 
        struct ARTexturedPlane {} *__begin_; 
        struct ARTexturedPlane {} *__end_; 
        struct __compressed_pair<ARTexturedPlane *, std::allocator<ARTexturedPlane>> { 
            struct ARTexturedPlane {} *__value_; 
        } __end_cap_; 
    }  _lastPlanes;
    double  _lastProbeUpdateTime;
    double  _minimumProbeUpdateInterval;
    long long  _mode;
    NSMutableDictionary * _probeIdentifiersByPlaneIdentifier;
    NSMutableArray * _probeUpdateQueue;
    NSMutableDictionary * _probesByIdentifier;
    NSMutableArray * _requestedProbeIdentifiers;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    NSObject<OS_dispatch_semaphore> * _textureDataSemaphore;
    NSUUID * _universeProbeIdentifier;
    NSMutableArray * _updatedProbeIdentifiers;
}

@property (nonatomic, readonly) long long mode;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_fullDescription;
- (bool)_textureDataIsBusy;
- (bool)addProbeWithAnchor:(id)arg1 timestamp:(double)arg2 textureImmediately:(bool)arg3;
- (id)initWithMode:(long long)arg1;
- (void)insertIntoQueue:(id)arg1;
- (bool)isBusy;
- (long long)mode;
- (void)requestTextureForProbe:(id)arg1;
- (id)updateProbesForTimestamp:(double)arg1 planes:(struct vector<ARTexturedPlane, std::allocator<ARTexturedPlane>> { struct ARTexturedPlane {} *x1; struct ARTexturedPlane {} *x2; struct __compressed_pair<ARTexturedPlane *, std::allocator<ARTexturedPlane>> { struct ARTexturedPlane {} *x_3_1_1; } x3; })arg2 imageData:(id)arg3 pose:(id)arg4 enableDirectTexturingForProbesWithIdentifier:(id)arg5;
- (void)updateProbesFromExistingAnchors:(id)arg1;

@end
