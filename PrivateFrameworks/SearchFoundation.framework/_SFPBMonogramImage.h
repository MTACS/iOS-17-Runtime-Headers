
@interface _SFPBMonogramImage : PBCodable <NSSecureCoding, _SFPBMonogramImage> {
    NSString * _monogramLetters;
    int  _monogramStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *monogramLetters;
@property (nonatomic) int monogramStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)monogramLetters;
- (int)monogramStyle;
- (bool)readFrom:(id)arg1;
- (void)setMonogramLetters:(id)arg1;
- (void)setMonogramStyle:(int)arg1;
- (void)writeTo:(id)arg1;

@end
