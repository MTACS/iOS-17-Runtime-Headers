
@interface AREnvironmentProbeUpdate : NSObject <ARResultData> {
    NSArray * _addedProbeAnchors;
    AREnvironmentProbeManager * _manager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _probeAnchorsLock;
    NSArray * _removedProbeAnchors;
    NSArray * _updatedProbeAnchors;
}

@property (nonatomic, readonly) NSArray *addedProbeAnchors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) AREnvironmentProbeManager *manager;
@property (nonatomic, readonly) NSArray *removedProbeAnchors;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *updatedProbeAnchors;

- (void).cxx_destruct;
- (id)addedProbeAnchors;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (id)init;
- (id)manager;
- (id)removedProbeAnchors;
- (void)setManager:(id)arg1;
- (void)updateAddedProbeAnchors:(id)arg1 updatedProbeAnchors:(id)arg2 removedProbeAnchors:(id)arg3;
- (id)updatedProbeAnchors;

@end
