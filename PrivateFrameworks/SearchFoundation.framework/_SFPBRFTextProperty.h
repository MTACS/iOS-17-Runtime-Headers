
@interface _SFPBRFTextProperty : PBCodable <NSSecureCoding, _SFPBRFTextProperty> {
    bool  _is_safe_for_logging;
    NSArray * _text_elements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool is_safe_for_logging;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *text_elements;

- (void).cxx_destruct;
- (void)addText_elements:(id)arg1;
- (void)clearText_elements;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)is_safe_for_logging;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setIs_safe_for_logging:(bool)arg1;
- (void)setText_elements:(id)arg1;
- (id)text_elements;
- (id)text_elementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)text_elementsCount;
- (void)writeTo:(id)arg1;

@end
