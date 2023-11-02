
@interface NTKFaceColorPaletteConfiguration : NSObject <NSCopying> {
    NSString * _collectionName;
    double  _colorFraction;
    NSString * _colorOption;
    <NTKFaceColorPaletteConfigurationDelegate> * _delegate;
    NSString * _formattedCollectionName;
    NTKPigmentEditOption * _pigmentEditOption;
    NSString * _uniqueId;
}

@property (nonatomic, retain) NSString *collectionName;
@property (nonatomic) double colorFraction;
@property (nonatomic, retain) NSString *colorOption;
@property (nonatomic) <NTKFaceColorPaletteConfigurationDelegate> *delegate;
@property (nonatomic, readonly) NSString *formattedCollectionName;
@property (nonatomic, retain) NTKPigmentEditOption *pigmentEditOption;

- (void).cxx_destruct;
- (id)collectionName;
- (double)colorFraction;
- (id)colorOption;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (id)description;
- (id)formattedCollectionName;
- (void)handleContentChanged;
- (id)initWithColorOption:(id)arg1 collectionName:(id)arg2;
- (id)initWithColorOption:(id)arg1 collectionName:(id)arg2 colorFraction:(double)arg3;
- (id)initWithPigmentEditOption:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pigmentEditOption;
- (void)setCollectionName:(id)arg1;
- (void)setColorFraction:(double)arg1;
- (void)setColorName:(id)arg1 collectionName:(id)arg2 colorFraction:(double)arg3;
- (void)setColorOption:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPigmentEditOption:(id)arg1;
- (id)uniqueId;

@end
