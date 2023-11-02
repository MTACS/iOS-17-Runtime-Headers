
@interface PGPet : NSObject <PGGraphIngestPet> {
    NSString * _localIdentifier;
    PGGraphMomentNodeCollection * _momentNodes;
    NSString * _name;
    PGGraphPersonNodeCollection * _ownerNodes;
    unsigned long long  _species;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) PGGraphPersonNodeCollection *ownerNodes;
@property (nonatomic, readonly) unsigned long long species;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addOwnerNodes:(id)arg1;
- (id)initWithLocalIdentifier:(id)arg1 petSpecies:(unsigned long long)arg2 name:(id)arg3 momentNodes:(id)arg4 ownerNodes:(id)arg5;
- (id)localIdentifier;
- (id)momentNodes;
- (id)name;
- (id)ownerNodes;
- (unsigned long long)species;

@end
