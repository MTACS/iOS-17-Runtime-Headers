
@interface PGGraphPetIdentityProcessorCache : NSObject {
    PGGraph * _graph;
    NSSet * _relevantAssetUUIDsForPetFaces;
}

@property (nonatomic, readonly) NSSet *relevantAssetUUIDsForPetFaces;

- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1;
- (id)relevantAssetUUIDsForPetFaces;

@end
