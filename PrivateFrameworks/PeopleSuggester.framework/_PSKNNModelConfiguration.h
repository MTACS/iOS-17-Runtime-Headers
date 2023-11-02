
@interface _PSKNNModelConfiguration : NSObject {
    NSArray * _bundleIds;
    unsigned long long  _clusterPruneThreshold;
    NSArray * _interactionCountMaxDepths;
    NSArray * _interactionHistoryRelativeStartDates;
    NSArray * _interactionMechanisms;
    NSString * _modelName;
    long long  _modelType;
    id /* block */  _shouldExcludeInteractionBlock;
}

@property (nonatomic, retain) NSArray *bundleIds;
@property (nonatomic, readonly) unsigned long long clusterPruneThreshold;
@property (nonatomic, retain) NSArray *interactionCountMaxDepths;
@property (nonatomic, retain) NSArray *interactionHistoryRelativeStartDates;
@property (nonatomic, retain) NSArray *interactionMechanisms;
@property (nonatomic, retain) NSString *modelName;
@property (nonatomic) long long modelType;
@property (nonatomic, copy) id /* block */ shouldExcludeInteractionBlock;

- (void).cxx_destruct;
- (id)bundleIds;
- (unsigned long long)clusterPruneThreshold;
- (id)initWithInteractionMechanisms:(id)arg1 interactionCountMaxDepths:(id)arg2 interactionHistoryRelativeStartDates:(id)arg3 bundleIds:(id)arg4 modelType:(long long)arg5 clusterPruneThreshold:(unsigned long long)arg6 modelName:(id)arg7;
- (id)initWithInteractionMechanisms:(id)arg1 interactionCountMaxDepths:(id)arg2 interactionHistoryRelativeStartDates:(id)arg3 bundleIds:(id)arg4 modelType:(long long)arg5 clusterPruneThreshold:(unsigned long long)arg6 modelName:(id)arg7 shouldExcludeInteractionBlock:(id /* block */)arg8;
- (id)interactionCountMaxDepths;
- (id)interactionHistoryRelativeStartDates;
- (id)interactionMechanisms;
- (id)modelName;
- (long long)modelType;
- (void)setBundleIds:(id)arg1;
- (void)setInteractionCountMaxDepths:(id)arg1;
- (void)setInteractionHistoryRelativeStartDates:(id)arg1;
- (void)setInteractionMechanisms:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setModelType:(long long)arg1;
- (void)setShouldExcludeInteractionBlock:(id /* block */)arg1;
- (id /* block */)shouldExcludeInteractionBlock;

@end
