
@interface AccessibilitySupportOverrides : NSObject {
    NSNumber * _boldText;
    NSNumber * _buttonShapes;
    NSNumber * _differentiateWithoutColor;
    NSNumber * _grayscale;
    NSNumber * _increaseContrast;
    NSNumber * _onOffLabels;
    NSNumber * _reduceMotion;
    NSNumber * _reduceTransparency;
    NSNumber * _smartInvert;
}

@property (nonatomic, retain) NSNumber *boldText;
@property (nonatomic, retain) NSNumber *buttonShapes;
@property (nonatomic, retain) NSNumber *differentiateWithoutColor;
@property (nonatomic, retain) NSNumber *grayscale;
@property (nonatomic, retain) NSNumber *increaseContrast;
@property (nonatomic, retain) NSNumber *onOffLabels;
@property (nonatomic, retain) NSNumber *reduceMotion;
@property (nonatomic, retain) NSNumber *reduceTransparency;
@property (nonatomic, retain) NSNumber *smartInvert;

+ (id)shared;

- (void).cxx_destruct;
- (void)_addFilter:(id)arg1;
- (void)_installGrayscaleFilter;
- (void)_installInvertColorsFilter;
- (void)_removeFilterWithName:(id)arg1;
- (id)boldText;
- (id)buttonShapes;
- (id)differentiateWithoutColor;
- (id)grayscale;
- (id)increaseContrast;
- (id)onOffLabels;
- (id)reduceMotion;
- (id)reduceTransparency;
- (void)setBoldText:(id)arg1;
- (void)setButtonShapes:(id)arg1;
- (void)setDifferentiateWithoutColor:(id)arg1;
- (void)setGrayscale:(id)arg1;
- (void)setIncreaseContrast:(id)arg1;
- (void)setOnOffLabels:(id)arg1;
- (void)setReduceMotion:(id)arg1;
- (void)setReduceTransparency:(id)arg1;
- (void)setSmartInvert:(id)arg1;
- (id)smartInvert;

@end
