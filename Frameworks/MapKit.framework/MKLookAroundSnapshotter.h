
@interface MKLookAroundSnapshotter : NSObject {
    MKMapSnapshotter * _snapshotter;
}

@property (getter=isLoading, nonatomic, readonly) bool loading;

- (void).cxx_destruct;
- (void)cancel;
- (void)getSnapshotWithCompletionHandler:(id /* block */)arg1;
- (id)initWithScene:(id)arg1 options:(id)arg2;
- (bool)isLoading;

@end
