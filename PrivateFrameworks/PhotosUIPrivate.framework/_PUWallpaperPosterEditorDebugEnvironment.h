
@interface _PUWallpaperPosterEditorDebugEnvironment : NSObject <PUWallpaperEditorEnvironment> {
    unsigned long long  _legacyConfigurationType;
    <PUPosterOverrideConfiguration> * _overrideConfiguration;
    PFPosterDescriptor * _posterDescriptor;
    UIColor * _pu_caseColor;
    NSString * _pu_selectedToolbarItemIdentifier;
    long long  _pu_userInterfaceStyle;
    NSURL * _sourceAssetDirectory;
    PFPosterConfiguration * _sourcePosterConfiguration;
    NSURL * _targetAssetDirectory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long legacyConfigurationType;
@property (nonatomic, retain) <PUPosterOverrideConfiguration> *overrideConfiguration;
@property (nonatomic, retain) PFPosterDescriptor *posterDescriptor;
@property (getter=pu_isCallServices, nonatomic, readonly) bool pu_callServices;
@property (nonatomic, retain) UIColor *pu_caseColor;
@property (nonatomic, readonly) long long pu_deviceOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } pu_floatingObscurableBounds;
@property (nonatomic, readonly) unsigned long long pu_legacyConfigurationType;
@property (nonatomic, readonly) <PUPosterOverrideConfiguration> *pu_overrideConfiguration;
@property (nonatomic, readonly) PFPosterDescriptor *pu_posterDescriptor;
@property (nonatomic, readonly) long long pu_posterType;
@property (nonatomic, retain) NSString *pu_selectedToolbarItemIdentifier;
@property (nonatomic, readonly) unsigned long long pu_significantEventsCounter;
@property (nonatomic, readonly) NSURL *pu_sourceAssetDirectory;
@property (nonatomic, readonly) PFPosterConfiguration *pu_sourcePosterConfiguration;
@property (nonatomic, readonly) NSURL *pu_targetAssetDirectory;
@property (nonatomic, readonly) <PUMutablePosterConfiguration> *pu_targetConfiguration;
@property (nonatomic) long long pu_userInterfaceStyle;
@property (nonatomic, retain) NSURL *sourceAssetDirectory;
@property (nonatomic, retain) PFPosterConfiguration *sourcePosterConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *targetAssetDirectory;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPosterDescriptor:(id)arg1;
- (id)initWithSourcePosterConfiguration:(id)arg1;
- (unsigned long long)legacyConfigurationType;
- (id)overrideConfiguration;
- (id)posterDescriptor;
- (id)pu_caseColor;
- (long long)pu_deviceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pu_floatingObscurableBounds;
- (bool)pu_isCallServices;
- (unsigned long long)pu_legacyConfigurationType;
- (id)pu_overrideConfiguration;
- (id)pu_posterDescriptor;
- (long long)pu_posterType;
- (id)pu_selectedToolbarItemIdentifier;
- (unsigned long long)pu_significantEventsCounter;
- (id)pu_sourceAssetDirectory;
- (id)pu_sourcePosterConfiguration;
- (id)pu_targetAssetDirectory;
- (id)pu_targetConfiguration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })pu_titleBoundsForLayout:(unsigned long long)arg1;
- (long long)pu_userInterfaceStyle;
- (void)setLegacyConfigurationType:(unsigned long long)arg1;
- (void)setOverrideConfiguration:(id)arg1;
- (void)setPosterDescriptor:(id)arg1;
- (void)setPu_caseColor:(id)arg1;
- (void)setPu_selectedToolbarItemIdentifier:(id)arg1;
- (void)setPu_userInterfaceStyle:(long long)arg1;
- (void)setSourceAssetDirectory:(id)arg1;
- (void)setSourcePosterConfiguration:(id)arg1;
- (void)setTargetAssetDirectory:(id)arg1;
- (id)sourceAssetDirectory;
- (id)sourcePosterConfiguration;
- (id)targetAssetDirectory;

@end
