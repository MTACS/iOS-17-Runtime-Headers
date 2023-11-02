
@interface MKAnnotatedMapSnapshotter : NSObject {
    NSArray * _mapItems;
    struct CGSize { 
        double width; 
        double height; 
    }  _mapSize;
    MKMapSnapshotOptions * _snapshotOptions;
    MKMapSnapshotter * _snapshotter;
    UITraitCollection * _traitCollection;
    bool  _useSnapshotService;
}

@property (nonatomic, readonly) MKMapCamera *camera;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic, retain) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (void)_initSnapshotterWithMapItems;
- (id)camera;
- (void)cancel;
- (id)initWithMapItems:(id)arg1 mapSize:(struct CGSize { double x1; double x2; })arg2 useSnapshotService:(bool)arg3;
- (bool)isLoading;
- (void)setTraitCollection:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)startWithQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)traitCollection;

@end
