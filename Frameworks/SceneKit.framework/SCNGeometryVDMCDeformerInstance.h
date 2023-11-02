
@interface SCNGeometryVDMCDeformerInstance : NSObject <SCNGeometryDeformerInstance> {
    NSMutableArray * _meshElementData;
    SCNMTLMesh * _subdivMesh;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)meshForDeformedTopology;
- (unsigned long long)updateWithContext:(id)arg1;

@end
