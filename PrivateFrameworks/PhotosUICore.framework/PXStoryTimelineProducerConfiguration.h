
@interface PXStoryTimelineProducerConfiguration : NSObject {
    <PXStoryErrorReporter> * _errorReporter;
    <PXStoryLoadingCoordinator> * _loadingCoordinator;
    unsigned long long  _options;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeOfPrioritizedDisplayAssetResources;
    PXStoryResourcesDataSource * _resourcesDataSource;
    id /* block */  _scorerFactory;
    <PXStoryTimelineSpec> * _spec;
    <PXStoryStyle> * _style;
}

@property (nonatomic, readonly) <PXStoryErrorReporter> *errorReporter;
@property (nonatomic, readonly) <PXStoryLoadingCoordinator> *loadingCoordinator;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeOfPrioritizedDisplayAssetResources;
@property (nonatomic, readonly) PXStoryResourcesDataSource *resourcesDataSource;
@property (nonatomic, copy) id /* block */ scorerFactory;
@property (nonatomic, readonly) <PXStoryTimelineSpec> *spec;
@property (nonatomic, readonly) <PXStoryStyle> *style;

- (void).cxx_destruct;
- (id)errorReporter;
- (id)init;
- (id)initWithResourcesDataSource:(id)arg1 style:(id)arg2 spec:(id)arg3 options:(unsigned long long)arg4 loadingCoordinator:(id)arg5 errorReporter:(id)arg6;
- (id)loadingCoordinator;
- (unsigned long long)options;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfPrioritizedDisplayAssetResources;
- (id)resourcesDataSource;
- (id /* block */)scorerFactory;
- (void)setRangeOfPrioritizedDisplayAssetResources:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setScorerFactory:(id /* block */)arg1;
- (id)spec;
- (id)style;

@end
