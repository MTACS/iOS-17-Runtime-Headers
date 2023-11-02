
@interface _SFPBRFColor : PBCodable <NSSecureCoding, _SFPBRFColor> {
    _SFPBRFOptionalFloat * _alpha;
    int  _name;
    _SFPBRFRGBValue * _rgb_value;
    unsigned long long  _whichValue;
}

@property (nonatomic, retain) _SFPBRFOptionalFloat *alpha;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int name;
@property (nonatomic, retain) _SFPBRFRGBValue *rgb_value;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long whichValue;

- (void).cxx_destruct;
- (id)alpha;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)name;
- (bool)readFrom:(id)arg1;
- (id)rgb_value;
- (void)setAlpha:(id)arg1;
- (void)setName:(int)arg1;
- (void)setRgb_value:(id)arg1;
- (unsigned long long)whichValue;
- (void)writeTo:(id)arg1;

@end
