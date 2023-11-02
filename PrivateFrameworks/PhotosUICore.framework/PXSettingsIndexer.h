
@interface PXSettingsIndexer : NSObject {
    NSMutableArray * _completionHandlers;
    PXSettingsIndex * _index;
    NSProgress * _indexingProgress;
    PXSettings * _rootSettings;
    long long  _state;
}

@property (nonatomic, readonly) NSMutableArray *completionHandlers;
@property (nonatomic, retain) PXSettingsIndex *index;
@property (nonatomic, retain) NSProgress *indexingProgress;
@property (nonatomic, readonly) PXSettings *rootSettings;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (void)_callCompletionHandlersIfNecessary;
- (void)_handleResultIndex:(id)arg1;
- (void)_startIndexingIfNecessary;
- (id)completionHandlers;
- (id)index;
- (id)indexingProgress;
- (id)init;
- (id)initWithRootSettings:(id)arg1;
- (id)rootSettings;
- (void)setIndex:(id)arg1;
- (void)setIndexingProgress:(id)arg1;
- (void)setState:(long long)arg1;
- (id)startIndexingWithCompletionHandler:(id /* block */)arg1;
- (long long)state;

@end
