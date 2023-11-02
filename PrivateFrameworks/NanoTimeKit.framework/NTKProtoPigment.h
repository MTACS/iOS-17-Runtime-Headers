
@interface NTKProtoPigment : PBCodable <NSCopying> {
    NSString * _alternativeLocalizedStringTableName;
    NSString * _bundlePrincipalClassName;
    NSString * _collectionName;
    float  _colorFraction;
    bool  _fromStore;
    struct { 
        unsigned int colorFraction : 1; 
        unsigned int fromStore : 1; 
        unsigned int isAddable : 1; 
        unsigned int supportsSlider : 1; 
    }  _has;
    bool  _isAddable;
    NSString * _optionName;
    bool  _supportsSlider;
}

@property (nonatomic, retain) NSString *alternativeLocalizedStringTableName;
@property (nonatomic, retain) NSString *bundlePrincipalClassName;
@property (nonatomic, retain) NSString *collectionName;
@property (nonatomic) float colorFraction;
@property (nonatomic) bool fromStore;
@property (nonatomic, readonly) bool hasAlternativeLocalizedStringTableName;
@property (nonatomic, readonly) bool hasBundlePrincipalClassName;
@property (nonatomic, readonly) bool hasCollectionName;
@property (nonatomic) bool hasColorFraction;
@property (nonatomic) bool hasFromStore;
@property (nonatomic) bool hasIsAddable;
@property (nonatomic, readonly) bool hasOptionName;
@property (nonatomic) bool hasSupportsSlider;
@property (nonatomic) bool isAddable;
@property (nonatomic, retain) NSString *optionName;
@property (nonatomic) bool supportsSlider;

- (void).cxx_destruct;
- (id)alternativeLocalizedStringTableName;
- (id)bundlePrincipalClassName;
- (id)collectionName;
- (float)colorFraction;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)fromStore;
- (bool)hasAlternativeLocalizedStringTableName;
- (bool)hasBundlePrincipalClassName;
- (bool)hasCollectionName;
- (bool)hasColorFraction;
- (bool)hasFromStore;
- (bool)hasIsAddable;
- (bool)hasOptionName;
- (bool)hasSupportsSlider;
- (unsigned long long)hash;
- (bool)isAddable;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)optionName;
- (bool)readFrom:(id)arg1;
- (void)setAlternativeLocalizedStringTableName:(id)arg1;
- (void)setBundlePrincipalClassName:(id)arg1;
- (void)setCollectionName:(id)arg1;
- (void)setColorFraction:(float)arg1;
- (void)setFromStore:(bool)arg1;
- (void)setHasColorFraction:(bool)arg1;
- (void)setHasFromStore:(bool)arg1;
- (void)setHasIsAddable:(bool)arg1;
- (void)setHasSupportsSlider:(bool)arg1;
- (void)setIsAddable:(bool)arg1;
- (void)setOptionName:(id)arg1;
- (void)setSupportsSlider:(bool)arg1;
- (bool)supportsSlider;
- (void)writeTo:(id)arg1;

@end
