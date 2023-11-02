
@interface _SFPBRFTextElement : PBCodable <NSSecureCoding, _SFPBRFTextElement> {
    NSArray * _formatted_texts;
    int  _line_limit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *formatted_texts;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int line_limit;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFormatted_text:(id)arg1;
- (void)clearFormatted_text;
- (id)dictionaryRepresentation;
- (id)formatted_textAtIndex:(unsigned long long)arg1;
- (unsigned long long)formatted_textCount;
- (id)formatted_texts;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)line_limit;
- (bool)readFrom:(id)arg1;
- (void)setFormatted_text:(id)arg1;
- (void)setFormatted_texts:(id)arg1;
- (void)setLine_limit:(int)arg1;
- (void)writeTo:(id)arg1;

@end
