
@interface ARMeshList : NSObject <ARResultData> {
    struct CV3DReconMeshList { } * _meshList;
    NSSet * _removedAnchors;
    double  _timestamp;
    NSSet * _updatedAnchors;
    NSArray * _visibleMeshIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CV3DReconMeshList { }*meshList;
@property (retain) NSSet *removedAnchors;
@property (readonly) Class superclass;
@property (retain) NSSet *updatedAnchors;
@property (nonatomic, readonly) NSArray *visibleMeshIdentifiers;

- (void).cxx_destruct;
- (void)dealloc;
- (struct CV3DReconMeshList { }*)meshList;
- (id)removedAnchors;
- (void)setMeshList:(struct CV3DReconMeshList { }*)arg1 visibleMeshIdentifiers:(id)arg2 updatedAnchors:(id)arg3 removedAnchors:(id)arg4 timestamp:(double)arg5;
- (void)setRemovedAnchors:(id)arg1;
- (void)setUpdatedAnchors:(id)arg1;
- (double)timestamp;
- (id)updatedAnchors;
- (id)visibleMeshIdentifiers;

@end
