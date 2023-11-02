
@interface SBSystemApertureKeyLineColorValidator : NSObject <PTSettingsKeyObserver> {
    struct CGColorTransform { } * _colorTransformToLAB;
    struct CGColorTransform { } * _colorTransformToRGB;
    struct CGColorSpace { } * _labColorSpace;
    struct CGColorSpace { } * _rgbColorSpace;
    SBSystemApertureSettings * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applySettingsValues;
- (void)dealloc;
- (id)init;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)validateKeyLineColor:(id)arg1;

@end
