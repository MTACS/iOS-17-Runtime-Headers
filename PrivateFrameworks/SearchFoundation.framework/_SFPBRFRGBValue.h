
@interface _SFPBRFRGBValue : PBCodable <NSSecureCoding, _SFPBRFRGBValue> {
    float  _blue;
    float  _green;
    float  _red;
}

@property (nonatomic) float blue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float green;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float red;
@property (readonly) Class superclass;

- (float)blue;
- (id)dictionaryRepresentation;
- (float)green;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (float)red;
- (void)setBlue:(float)arg1;
- (void)setGreen:(float)arg1;
- (void)setRed:(float)arg1;
- (void)writeTo:(id)arg1;

@end
