
@interface _FBSSnapshot : NSObject <BSInvalidatable> {
    _FBSSnapshotContext * _context;
    struct CGImage { } * _imageRef;
    IOSurface * _nonProtectedSurfaceRef;
    IOSurface * _protectedSurfaceRef;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) IOSurface *IOSurface;
@property (nonatomic, readonly, copy) _FBSSnapshotContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) IOSurface *fallbackIOSurface;
@property (nonatomic, readonly) bool hasProtectedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (id)IOSurface;
- (void)_doInvalidate;
- (double)_scale;
- (struct CGSize { double x1; double x2; })_scaledSnapshotSize;
- (void)_synchronizedCaptureWithCompletion:(id /* block */)arg1;
- (bool)capture;
- (id)context;
- (void)dealloc;
- (id)fallbackIOSurface;
- (bool)hasProtectedContent;
- (id)initWithSnapshotContext:(id)arg1;
- (void)invalidate;

@end
