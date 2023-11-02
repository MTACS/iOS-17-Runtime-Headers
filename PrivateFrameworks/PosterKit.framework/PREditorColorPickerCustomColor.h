
@interface PREditorColorPickerCustomColor : NSObject <PREditorColorPickerColor> {
    id /* block */  _colorProvider;
    double  _initialVariation;
    NSString * _localizedName;
}

@property (nonatomic, readonly, copy) PRPosterColor *baseColor;
@property (nonatomic, readonly, copy) id /* block */ colorProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double initialVariation;
@property (readonly) bool isCustomColor;
@property (readonly) bool isVibrantColor;
@property (nonatomic, readonly) PRPosterColor *leftSliderColor;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly) PRPosterColor *rightSliderColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseColor;
- (id /* block */)colorProvider;
- (id)colorWithVariation:(double)arg1;
- (id)displayColorWithVariation:(double)arg1;
- (id)initWithDefaultInitialVariation:(double)arg1 colorProvider:(id /* block */)arg2;
- (id)initWithInitialVariation:(double)arg1 colorProvider:(id /* block */)arg2;
- (id)initWithInitialVariation:(double)arg1 colorProvider:(id /* block */)arg2 localizedName:(id)arg3;
- (double)initialVariation;
- (bool)isCustomColor;
- (bool)isVibrantColor;
- (id)leftSliderColor;
- (id)localizedName;
- (id)rightSliderColor;

@end
