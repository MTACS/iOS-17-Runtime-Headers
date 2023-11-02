
@interface PXPlacesSearchProvider : NSObject {
    PXPlacesSnapshotFactory * _factory;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) PXPlacesSnapshotFactory *factory;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)_extendedTraitCollectionForTraitCollection:(id)arg1;
+ (id)_placesSnapshotOptionsForSize:(struct CGSize { double x1; double x2; })arg1 extendedTraitCollection:(id)arg2 serialQueue:(id)arg3;

- (void).cxx_destruct;
- (id)factory;
- (id)init;
- (void)requestBoundingRegionForQuery:(id)arg1 completion:(id /* block */)arg2;
- (void)requestMapSnapshotForQuery:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 traitCollectionForSnapshot:(id)arg3 completion:(id /* block */)arg4;
- (void)requestMapSnapshotOfRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 traitCollectionForSnapshot:(id)arg3 completion:(id /* block */)arg4;
- (id)serialQueue;
- (void)setFactory:(id)arg1;
- (void)setSerialQueue:(id)arg1;

@end
