
@interface PRUISPosterSnapshotResult : NSObject {
    UIImage * _backgroundLayerImage;
    UIImage * _compositeLayerImage;
    double  _executionTime;
    UIImage * _floatingLayerImage;
    UIImage * _foregroundLayerImage;
    <BSInvalidatable> * _pathValidityExtension;
    PRPosterSnapshotBundle * _snapshotBundle;
    PRSPosterPath<BSInvalidatable> * _snapshotBundlePath;
    PRPosterSnapshotterResult * _snapshotterResult;
}

@property (nonatomic, retain) UIImage *backgroundLayerImage;
@property (nonatomic, retain) UIImage *compositeLayerImage;
@property (nonatomic) double executionTime;
@property (nonatomic, retain) UIImage *floatingLayerImage;
@property (nonatomic, retain) UIImage *foregroundLayerImage;
@property (nonatomic, retain) PRPosterSnapshotBundle *snapshotBundle;
@property (nonatomic, retain) PRSPosterPath<BSInvalidatable> *snapshotBundlePath;

- (void).cxx_destruct;
- (id)backgroundLayerImage;
- (id)compositeLayerImage;
- (void)dealloc;
- (double)executionTime;
- (id)floatingLayerImage;
- (id)foregroundLayerImage;
- (id)initWithSnapshotBundle:(id)arg1;
- (id)initWithSnapshotterResult:(id)arg1;
- (void)setBackgroundLayerImage:(id)arg1;
- (void)setCompositeLayerImage:(id)arg1;
- (void)setExecutionTime:(double)arg1;
- (void)setFloatingLayerImage:(id)arg1;
- (void)setForegroundLayerImage:(id)arg1;
- (void)setSnapshotBundle:(id)arg1;
- (void)setSnapshotBundlePath:(id)arg1;
- (id)snapshotBundle;
- (id)snapshotBundlePath;

@end
