
@interface AVCaptureRotationHelperLayer : CALayer {
    AVWeakReference * _delegate;
}

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)layerDidBecomeVisible:(bool)arg1;

@end
