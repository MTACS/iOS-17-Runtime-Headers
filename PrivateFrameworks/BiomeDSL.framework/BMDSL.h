
@interface BMDSL : BMDSLBaseCodable <BMDSL>

@property (nonatomic, readonly, copy) NSSet *rootStreamIdentifiers;
@property (nonatomic, readonly, copy) NSSet *streamPublishers;
@property (nonatomic, readonly) NSArray *upstreams;

// Image: /System/Library/PrivateFrameworks/BiomeDSL.framework/BiomeDSL

- (void)allowEvaluation;
- (id)as:(id)arg1;
- (id)bpsPublisher;
- (id)collect;
- (id)combinedState;
- (id)filterWithKeyPath:(id)arg1 comparison:(long long)arg2 negation:(bool)arg3 value:(id)arg4;
- (id)filterWithKeyPath:(id)arg1 comparison:(long long)arg2 value:(id)arg3;
- (id)filterWithKeyPath:(id)arg1 value:(id)arg2;
- (id)insertState:(id)arg1 as:(id)arg2;
- (id)mapWithSelector:(SEL)arg1;
- (id)mapWithTransform:(id)arg1;
- (id)mapWithTransform:(id)arg1 keyPaths:(id)arg2;
- (id)mergeWithOther:(id)arg1;
- (id)orderedMergeWithOther:(id)arg1 key:(id)arg2 selector:(SEL)arg3;
- (id)subscribeOn:(id)arg1;
- (id)subscribeOn:(id)arg1 with:(id)arg2;
- (id)upstreams;
- (id)windowByKeyedPath:(id)arg1 assigner:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams

- (id)asTableWithTransform:(id)arg1 schema:(id)arg2;
- (id)rootStreamIdentifiers;
- (id)streamPublishers;
- (id)trackDerivatesInDBAtURL:(id)arg1 derivedTableName:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ContextSync.framework/ContextSync

- (id)bmdsl_serialize;

@end
