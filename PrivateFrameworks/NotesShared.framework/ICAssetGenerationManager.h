
@interface ICAssetGenerationManager : NSObject {
    bool  _advancing;
    NSURL * _containerURL;
    ICAssetGeneration * _currentGeneration;
    NSArray * _fallbackURLs;
    NSString * _generationKeyPath;
    double  _generationTimeout;
    ICAssetGeneration * _nextGeneration;
    ICDistributedLock * _nextGenerationLock;
    ICCloudSyncingObject * _object;
}

@property (getter=isAdvancing, nonatomic) bool advancing;
@property (nonatomic, readonly, copy) NSURL *containerURL;
@property (nonatomic, copy) ICAssetGeneration *currentGeneration;
@property (nonatomic, copy) NSArray *fallbackURLs;
@property (nonatomic, readonly, copy) NSString *generationKeyPath;
@property (nonatomic) double generationTimeout;
@property (nonatomic, readonly, copy) NSURL *generationURL;
@property (nonatomic, copy) ICAssetGeneration *nextGeneration;
@property (nonatomic, retain) ICDistributedLock *nextGenerationLock;
@property (nonatomic, readonly) ICCloudSyncingObject *object;

- (void).cxx_destruct;
- (bool)beginGeneration;
- (bool)commitGeneration;
- (id)containerURL;
- (id)currentGeneration;
- (void)dealloc;
- (id)description;
- (id)fallbackURLs;
- (id)generationKeyPath;
- (double)generationTimeout;
- (id)generationURL;
- (id)initWithObject:(id)arg1 generationKeyPath:(id)arg2 containerURL:(id)arg3;
- (bool)isAdvancing;
- (void)managedObjectContextDidSaveObjectIDs:(id)arg1;
- (void)managedObjectContextObjectsDidChange:(id)arg1;
- (id)nextGeneration;
- (id)nextGenerationLock;
- (id)object;
- (void)removeStaleGenerations;
- (bool)rollbackGeneration;
- (void)setAdvancing:(bool)arg1;
- (void)setCurrentGeneration:(id)arg1;
- (void)setFallbackURLs:(id)arg1;
- (void)setGenerationTimeout:(double)arg1;
- (void)setNextGeneration:(id)arg1;
- (void)setNextGenerationLock:(id)arg1;
- (void)updateCurrentGeneration;

@end
