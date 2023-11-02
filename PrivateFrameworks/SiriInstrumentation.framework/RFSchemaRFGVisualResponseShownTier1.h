
@interface RFSchemaRFGVisualResponseShownTier1 : SISchemaInstrumentationMessage {
    bool  _hasPatternId;
    bool  _hasResponseModel;
    bool  _hasResponseViewId;
    bool  _hasVersion;
    NSString * _patternId;
    NSString * _responseModel;
    NSString * _responseViewId;
    NSString * _version;
}

@property (nonatomic) bool hasPatternId;
@property (nonatomic) bool hasResponseModel;
@property (nonatomic) bool hasResponseViewId;
@property (nonatomic) bool hasVersion;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *patternId;
@property (nonatomic, copy) NSString *responseModel;
@property (nonatomic, copy) NSString *responseViewId;
@property (nonatomic, copy) NSString *version;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deletePatternId;
- (void)deleteResponseModel;
- (void)deleteResponseViewId;
- (void)deleteVersion;
- (id)dictionaryRepresentation;
- (bool)hasPatternId;
- (bool)hasResponseModel;
- (bool)hasResponseViewId;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)patternId;
- (bool)readFrom:(id)arg1;
- (id)responseModel;
- (id)responseViewId;
- (void)setHasPatternId:(bool)arg1;
- (void)setHasResponseModel:(bool)arg1;
- (void)setHasResponseViewId:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setPatternId:(id)arg1;
- (void)setResponseModel:(id)arg1;
- (void)setResponseViewId:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)version;
- (void)writeTo:(id)arg1;

@end
