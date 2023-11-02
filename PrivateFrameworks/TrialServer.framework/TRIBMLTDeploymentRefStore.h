
@interface TRIBMLTDeploymentRefStore : NSObject <TRIPathReferencing> {
    TRIServerContext * _context;
}

- (void).cxx_destruct;
- (bool)hasReferenceToPath:(id)arg1;
- (id)initWithServerContext:(id)arg1;

@end
