
@interface _TtCC15PhotosUIPrivate43AmbientPhotoFramePlayergroundViewControllerP33_AA406F95772BEA5A2E5AABA48A24960036PlaygroundPosterRenderingEnvironment : NSObject <PUWallpaperRenderingEnvironment> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  assetDirectory;
}

@property (nonatomic, readonly) NSURL *pu_assetDirectory;
@property (nonatomic, readonly) long long pu_backlightLuminance;
@property (nonatomic, readonly) bool pu_callServices;
@property (nonatomic, readonly) long long pu_contentsType;
@property (nonatomic, readonly) long long pu_deviceOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pu_floatingObscurableBounds;
@property (nonatomic, readonly) bool pu_playground;
@property (nonatomic, readonly) bool pu_preview;
@property (nonatomic, readonly) long long pu_significantEventsCounter;
@property (nonatomic, readonly) bool pu_snapshot;

- (void).cxx_destruct;
- (id)init;
- (id)pu_assetDirectory;
- (long long)pu_backlightLuminance;
- (long long)pu_contentsType;
- (long long)pu_deviceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pu_floatingObscurableBounds;
- (bool)pu_isCallServices;
- (bool)pu_isPlayground;
- (bool)pu_isPreview;
- (bool)pu_isSnapshot;
- (long long)pu_significantEventsCounter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pu_titleBoundsForLayout:(unsigned long long)arg1;

@end
