
@interface _SBSystemApertureGainMapView : UIView <SBSystemApertureGainMapBackedRendering> {
    UIView * _clonedGainMapSubstituteView;
    _SBGainMapView * _gainMapView;
    struct SBSystemApertureContainerRenderingConfiguration { 
        long long renderingStyle; 
        long long cloningStyle; 
    }  _renderingConfiguration;
    SBSystemApertureSettings * _settings;
}

@property (nonatomic) struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; } renderingConfiguration;

- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; })renderingConfiguration;
- (void)setID0CornerRadius:(double)arg1;
- (void)setRenderingConfiguration:(struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; })arg1;

@end
