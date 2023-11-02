
@interface _SFPBRFAspectRatio : PBCodable <NSSecureCoding, _SFPBRFAspectRatio> {
    float  _height;
    float  _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float height;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) float width;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (float)height;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHeight:(float)arg1;
- (void)setWidth:(float)arg1;
- (float)width;
- (void)writeTo:(id)arg1;

@end
