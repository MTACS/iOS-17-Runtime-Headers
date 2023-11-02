
@interface CLSCurationDebugCluster : CLSCurationDebugObject {
    NSSet * _debugClusters;
    NSString * _reason;
    NSSet * _unclusteredDebugItems;
}

@property (readonly) NSString *reason;
@property (nonatomic, retain) NSSet *unclusteredDebugItems;

- (void).cxx_destruct;
- (void)addDebugClusters:(id)arg1;
- (id)allDebugItems;
- (id)dictionaryRepresentation;
- (id)initWithDebugItems:(id)arg1 reason:(id)arg2;
- (id)reason;
- (void)resetWithReason:(id)arg1 agent:(id)arg2 stage:(id)arg3;
- (void)setDebugClusters:(id)arg1;
- (void)setUnclusteredDebugItems:(id)arg1;
- (id)timestamp;
- (id)unclusteredDebugItems;

@end
