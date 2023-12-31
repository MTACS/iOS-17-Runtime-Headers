
@interface CNUIMapTileGenerator : NSObject {
    id /* block */  _geocoderProvider;
    <CNSchedulerProvider> * _schedulerProvider;
    id /* block */  _snapshotterProvider;
    <CNScheduler> * _workQueue;
}

@property (nonatomic, readonly, copy) id /* block */ geocoderProvider;
@property (nonatomic, readonly, copy) <CNSchedulerProvider> *schedulerProvider;
@property (nonatomic, readonly, copy) id /* block */ snapshotterProvider;
@property (nonatomic, readonly, copy) <CNScheduler> *workQueue;

+ (id)defaultImage;
+ (double)defaultTileSize;
+ (id)mapTileImagesForPlacemark:(id)arg1 snapshotterProvider:(id /* block */)arg2 scheduler:(id)arg3;
+ (id)placemarkForAddress:(id)arg1 geocoderProvider:(id /* block */)arg2 scheduler:(id)arg3;

- (void).cxx_destruct;
- (id /* block */)geocoderProvider;
- (id)init;
- (id)initWithGeocoderProvider:(id /* block */)arg1 snapshotterProvider:(id /* block */)arg2 schedulerProvider:(id)arg3;
- (id)schedulerProvider;
- (id /* block */)snapshotterProvider;
- (id)tilesForAddress:(id)arg1;
- (id)workQueue;

@end
