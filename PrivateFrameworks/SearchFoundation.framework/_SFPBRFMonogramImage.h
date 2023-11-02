
@interface _SFPBRFMonogramImage : PBCodable <NSSecureCoding, _SFPBRFMonogramImage> {
    int  _image_style;
    NSString * _letters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int image_style;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *letters;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (int)image_style;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)letters;
- (bool)readFrom:(id)arg1;
- (void)setImage_style:(int)arg1;
- (void)setLetters:(id)arg1;
- (void)writeTo:(id)arg1;

@end
