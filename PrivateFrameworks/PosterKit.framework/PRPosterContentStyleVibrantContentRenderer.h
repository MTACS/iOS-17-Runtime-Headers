
@interface PRPosterContentStyleVibrantContentRenderer : NSObject <PRPosterContentStyleRendererPrivate> {
    BSUIVibrancyConfiguration * _activeVibrancyConfiguration;
    NSURL * _extensionBundleURL;
    _PRContentStyleGradientView * _gradientView;
    UILabel * _label;
    UIColor * _labelColor;
    BSUIVibrancyEffectView * _vibrancyView;
}

@property (nonatomic, retain) BSUIVibrancyConfiguration *activeVibrancyConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *extensionBundleURL;
@property (nonatomic, retain) _PRContentStyleGradientView *gradientView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, retain) UIColor *labelColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BSUIVibrancyEffectView *vibrancyView;

- (void).cxx_destruct;
- (id)activeVibrancyConfiguration;
- (id)extensionBundleURL;
- (id)gradientView;
- (id)initWithVibrancyView:(id)arg1;
- (id)initWithVibrancyView:(id)arg1 label:(id)arg2;
- (id)label;
- (id)labelColor;
- (id)privateStyleForStyle:(id)arg1;
- (void)removeGradientIfNeeded;
- (void)renderDiscreteColorStyle:(id)arg1;
- (void)renderGradientStyle:(id)arg1;
- (void)renderLUTStyle:(id)arg1;
- (void)renderVibrantMaterialStyle:(id)arg1;
- (void)renderVibrantMonochromeStyle:(id)arg1;
- (void)setActiveVibrancyConfiguration:(id)arg1;
- (void)setExtensionBundleURL:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setLabelColor:(id)arg1;
- (void)updateForVibrantStyle:(id)arg1;
- (id)vibrancyView;

@end
