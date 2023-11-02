
@interface _PUWallpaperDebugRenderingEnvironment : NSObject <PUWallpaperRenderingEnvironment> {
    NSURL * _assetDirectory;
    PFPosterConfiguration * _posterConfiguration;
    bool  _pu_preview;
    unsigned long long  _pu_significantEventsCounter;
    bool  _pu_snapshot;
}

@property (nonatomic, readonly) NSURL *assetDirectory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PFPosterConfiguration *posterConfiguration;
@property (nonatomic, readonly) NSURL *pu_assetDirectory;
@property (getter=pu_backlightLuminance, nonatomic, readonly) long long pu_backlightLuminance;
@property (getter=pu_isCallServices, nonatomic, readonly) bool pu_callServices;
@property (nonatomic, readonly) long long pu_contentsType;
@property (nonatomic, readonly) long long pu_deviceOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pu_floatingObscurableBounds;
@property (getter=pu_isPlayground, nonatomic, readonly) bool pu_playground;
@property (getter=pu_isPreview, nonatomic, readonly) bool pu_preview;
@property (nonatomic) unsigned long long pu_significantEventsCounter;
@property (getter=pu_isSnapshot, nonatomic, readonly) bool pu_snapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetDirectory;
- (id)initWithPosterConfiguration:(id)arg1 assetDirectory:(id)arg2;
- (id)posterConfiguration;
- (id)pu_assetDirectory;
- (long long)pu_backlightLuminance;
- (long long)pu_contentsType;
- (long long)pu_deviceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pu_floatingObscurableBounds;
- (bool)pu_isCallServices;
- (bool)pu_isPlayground;
- (bool)pu_isPreview;
- (bool)pu_isSnapshot;
- (unsigned long long)pu_significantEventsCounter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pu_titleBoundsForLayout:(unsigned long long)arg1;
- (void)setPu_significantEventsCounter:(unsigned long long)arg1;

@end
