
@protocol PGGraphIngestPet <NSObject>

@required

- (void)addOwnerNodes:(PGGraphPersonNodeCollection *)arg1;
- (NSString *)localIdentifier;
- (PGGraphMomentNodeCollection *)momentNodes;
- (NSString *)name;
- (PGGraphPersonNodeCollection *)ownerNodes;
- (unsigned long long)species;

@end
