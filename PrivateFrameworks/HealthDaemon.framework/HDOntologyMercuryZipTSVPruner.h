
@interface HDOntologyMercuryZipTSVPruner : NSObject {
    HDOntologyUpdateCoordinator * _updateCoordinator;
}

@property (nonatomic, readonly) HDOntologyUpdateCoordinator *updateCoordinator;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOntologyUpdateCoordinator:(id)arg1;
- (long long)pruneEntries:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)updateCoordinator;

@end
