
@interface HMDCoordinationLocalElectionMeshNode : NSObject <HMDLocalElectionMeshNode> {
    NSString * _idsIdentifier;
    COMeshNode * _meshNode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *idsIdentifier;
@property (readonly) COMeshNode *meshNode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)idsIdentifier;
- (id)initWithMeshNode:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)meshNode;
- (void)setIdsIdentifier:(id)arg1;

@end
