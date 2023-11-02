
@interface MKMapSnapshotView : UIImageView {
    MKMapSnapshotter * _gridSnapshotter;
    MKMapSnapshotter * _snapshotter;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)takeSnapshotWithOptions:(id)arg1 gridOptions:(id)arg2 completionHandler:(id /* block */)arg3;

@end
