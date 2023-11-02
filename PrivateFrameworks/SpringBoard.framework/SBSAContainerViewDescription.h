
@interface SBSAContainerViewDescription : SBSAViewDescription <SBSAContainerKeyLineDescribing, SBSAContainerShadowDescribing, SBSAElementAssociating> {
    <SAElementIdentifying> * _associatedSystemApertureElementIdentity;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentCenter;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentScale;
    long long  _keyLineMode;
    UIColor * _keyLineTintColor;
    struct SBSystemApertureContainerRenderingConfiguration { 
        long long renderingStyle; 
        long long cloningStyle; 
    }  _renderingConfiguration;
    long long  _sampledBackgroundLuminanceLevel;
    long long  _shadowStyle;
}

@property (setter=_setAssociatedSystemApertureElementIdentity:, nonatomic, copy) <SAElementIdentifying> *associatedSystemApertureElementIdentity;
@property (setter=_setContentBounds:, nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (setter=_setContentCenter:, nonatomic) struct CGPoint { double x1; double x2; } contentCenter;
@property (setter=_setContentScale:, nonatomic) struct CGSize { double x1; double x2; } contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *interfaceElementIdentifier;
@property (setter=_setKeyLineMode:, nonatomic) long long keyLineMode;
@property (setter=_setKeyLineTintColor:, nonatomic, copy) UIColor *keyLineTintColor;
@property (setter=_setRenderingConfiguration:, nonatomic) struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; } renderingConfiguration;
@property (setter=_setSampledBackgroundLuminanceLevel:, nonatomic) long long sampledBackgroundLuminanceLevel;
@property (setter=_setShadowStyle:, nonatomic) long long shadowStyle;
@property (readonly) Class superclass;

+ (Class)mutatorClass;

- (void).cxx_destruct;
- (void)_setAssociatedSystemApertureElementIdentity:(id)arg1;
- (void)_setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setContentCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setContentScale:(struct CGSize { double x1; double x2; })arg1;
- (void)_setKeyLineMode:(long long)arg1;
- (void)_setKeyLineTintColor:(id)arg1;
- (void)_setRenderingConfiguration:(struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; })arg1;
- (void)_setSampledBackgroundLuminanceLevel:(long long)arg1;
- (void)_setShadowStyle:(long long)arg1;
- (id)associatedSystemApertureElementIdentity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct CGPoint { double x1; double x2; })contentCenter;
- (struct CGSize { double x1; double x2; })contentScale;
- (id)copyByPixelAligningGeometryWithScale:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)keyLineMode;
- (id)keyLineTintColor;
- (struct SBSystemApertureContainerRenderingConfiguration { long long x1; long long x2; })renderingConfiguration;
- (long long)sampledBackgroundLuminanceLevel;
- (long long)shadowStyle;

@end
