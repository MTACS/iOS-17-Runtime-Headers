
@interface HDOntologyShardPruner : NSObject <HDCacheDeleteProvider> {
    HDOntologyUpdateCoordinator * _updateCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDOntologyUpdateCoordinator *updateCoordinator;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOntologyUpdateCoordinator:(id)arg1;
- (bool)pruneOntologyWithOptions:(unsigned long long)arg1 error:(id*)arg2;
- (long long)purgeSpaceForUrgency:(int)arg1 volume:(id)arg2;
- (long long)purgeableSpaceForUrgency:(int)arg1 volume:(id)arg2;
- (id)updateCoordinator;

@end
