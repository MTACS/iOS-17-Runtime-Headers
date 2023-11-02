
@interface _SFPBRFVisualProperty : PBCodable <NSSecureCoding, _SFPBRFVisualProperty> {
    bool  _is_safe_for_logging;
    NSArray * _visual_elements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool is_safe_for_logging;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *visual_elements;

- (void).cxx_destruct;
- (void)addVisual_elements:(id)arg1;
- (void)clearVisual_elements;
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
- (void)setVisual_elements:(id)arg1;
- (id)visual_elements;
- (id)visual_elementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visual_elementsCount;
- (void)writeTo:(id)arg1;

@end
