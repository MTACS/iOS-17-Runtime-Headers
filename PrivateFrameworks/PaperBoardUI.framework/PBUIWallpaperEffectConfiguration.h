
@interface PBUIWallpaperEffectConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    struct { 
        long long backdropStyle; 
        long long stackingLevel; 
        long long renderingHint; 
        double blurRadius; 
        double saturationDeltaFactor; 
        double grayscaleTintLevel; 
        double grayscaleTintAlpha; 
        long long materialStyle; 
    }  _backdropParameters;
    bool  _includeTint;
    long long  _style;
    long long  _userInterfaceStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
