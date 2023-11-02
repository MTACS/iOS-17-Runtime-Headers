
@interface _SFPBGradientColor : PBCodable <NSSecureCoding, _SFPBGradientColor> {
    NSArray * _colors;
    int  _gradientType;
}

@property (nonatomic, copy) NSArray *colors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int gradientType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addColors:(id)arg1;
- (void)clearColors;
- (id)colors;
- (id)colorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)colorsCount;
- (id)dictionaryRepresentation;
- (int)gradientType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setGradientType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
