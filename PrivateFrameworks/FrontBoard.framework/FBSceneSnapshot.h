
@interface FBSceneSnapshot : NSObject {
    FBSceneSnapshotContext * _context;
    FBScene * _scene;
    _FBSSnapshot * _snapshot;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) IOSurface *IOSurface;
@property (nonatomic, readonly, copy) FBSceneSnapshotContext *context;
@property (nonatomic, readonly) IOSurface *fallbackIOSurface;
@property (nonatomic, readonly) bool hasProtectedContent;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (id)IOSurface;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_baseTransformForSnapshotContext:(id)arg1 rootContext:(id)arg2;
- (id)_collectLayersToSnapshotFromScene:(id)arg1 withSnapshotContext:(id)arg2 rootContext:(id)arg3;
- (bool)capture;
- (id)context;
- (id)fallbackIOSurface;
- (bool)hasProtectedContent;
- (id)initWithScene:(id)arg1 snapshotContext:(id)arg2;

@end
