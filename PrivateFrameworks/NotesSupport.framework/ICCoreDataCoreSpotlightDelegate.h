
@interface ICCoreDataCoreSpotlightDelegate : NSCoreDataCoreSpotlightDelegate {
    unsigned long long  _indexingPriority;
    bool  _isCheckingObjectConsistency;
    bool  _shouldPerformConsistencyCheck;
}

@property (nonatomic) unsigned long long indexingPriority;
@property (nonatomic) bool isCheckingObjectConsistency;
@property (nonatomic, readonly) bool shouldPerformConsistencyCheck;

- (id)attributeSetForObject:(id)arg1;
- (id)bundleIdentifier;
- (void)dealloc;
- (id)indexName;
- (unsigned long long)indexingPriority;
- (id)initForStoreWithDescription:(id)arg1 coordinator:(id)arg2 indexingPriority:(unsigned long long)arg3;
- (bool)isCheckingObjectConsistency;
- (void)setIndexingPriority:(unsigned long long)arg1;
- (void)setIsCheckingObjectConsistency:(bool)arg1;
- (bool)shouldIndexableObjectExistInIndexing:(id)arg1;
- (bool)shouldPerformConsistencyCheck;
- (void)startSpotlightIndexing;
- (void)stopSpotlightIndexing;

@end
