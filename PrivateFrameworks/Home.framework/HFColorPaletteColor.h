
@interface HFColorPaletteColor : NSObject <NAEquatable, NSCopying> {
    HFColorCollection * _colorCollection;
    <HFColorLikeObject> * _colorValue;
}

@property (nonatomic, readonly) UIColor *UIColor;
@property (nonatomic, readonly) HFColorCollection *colorCollection;
@property (nonatomic, readonly) <HFColorLikeObject> *colorValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isNaturalLightColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UIColor;
- (id)colorByAdjustingToColorProfile:(id)arg1;
- (id)colorCollection;
- (id)colorValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithPreferredPaletteType:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithColorCollection:(id)arg1;
- (id)initWithColorValue:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithNaturalLightColor;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)initWithUIColor:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNaturalLightColor;
- (bool)isSimilarToColor:(id)arg1;

@end
