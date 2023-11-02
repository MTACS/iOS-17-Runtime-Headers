
@interface _PXStoryPreloadingControllerInfo : NSObject {
    PXObservable<PXStoryResourcesPreloadingCoordinatable> * _preloadingController;
    long long  _priority;
}

@property (nonatomic, retain) PXObservable<PXStoryResourcesPreloadingCoordinatable> *preloadingController;
@property (nonatomic) long long priority;

- (void).cxx_destruct;
- (id)preloadingController;
- (long long)priority;
- (void)setPreloadingController:(id)arg1;
- (void)setPriority:(long long)arg1;

@end
