
@interface _SFPBPatternModel : PBCodable <NSSecureCoding, _SFPBPatternModel> {
    NSString * _pattern_bundle_id;
    NSString * _pattern_id;
    NSData * _pattern_parameters;
    NSString * _pattern_template_directory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *pattern_bundle_id;
@property (nonatomic, copy) NSString *pattern_id;
@property (nonatomic, copy) NSData *pattern_parameters;
@property (nonatomic, copy) NSString *pattern_template_directory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)pattern_bundle_id;
- (id)pattern_id;
- (id)pattern_parameters;
- (id)pattern_template_directory;
- (bool)readFrom:(id)arg1;
- (void)setPattern_bundle_id:(id)arg1;
- (void)setPattern_id:(id)arg1;
- (void)setPattern_parameters:(id)arg1;
- (void)setPattern_template_directory:(id)arg1;
- (void)writeTo:(id)arg1;

@end
