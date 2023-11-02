
@interface _SFPBResponseWrapperCardSection : PBCodable <NSSecureCoding, _SFPBResponseWrapperCardSection> {
    _SFPBCATModel * _catModel;
    _SFPBPatternModel * _pattern_model;
    NSArray * _pattern_models;
    NSData * _visualCATOutput;
}

@property (nonatomic, retain) _SFPBCATModel *catModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBPatternModel *pattern_model;
@property (nonatomic, copy) NSArray *pattern_models;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSData *visualCATOutput;

- (void).cxx_destruct;
- (void)addPattern_models:(id)arg1;
- (id)catModel;
- (void)clearPattern_models;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)pattern_model;
- (id)pattern_models;
- (id)pattern_modelsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pattern_modelsCount;
- (bool)readFrom:(id)arg1;
- (void)setCatModel:(id)arg1;
- (void)setPattern_model:(id)arg1;
- (void)setPattern_models:(id)arg1;
- (void)setVisualCATOutput:(id)arg1;
- (id)visualCATOutput;
- (void)writeTo:(id)arg1;

@end
