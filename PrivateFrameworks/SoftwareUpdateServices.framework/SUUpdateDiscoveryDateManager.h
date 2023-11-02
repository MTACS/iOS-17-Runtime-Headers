
@interface SUUpdateDiscoveryDateManager : NSObject {
    NSMutableArray * _buildVersionArray;
    NSMutableArray * _discoveryDateArray;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

- (bool)containsBuildVersion:(id)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)discoveryDateforBuildVersion:(id)arg1;
- (id)init;
- (id)initWithDiscoveryDateDictionary:(id)arg1;
- (void)setDiscoveryDate:(id)arg1 forBuildVersion:(id)arg2;

@end
