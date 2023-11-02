
@interface GRRSchemaGRRFeatureFlag : SISchemaInstrumentationMessage {
    NSString * _featureFlagKey;
    struct { 
        unsigned int isEnabled : 1; 
    }  _has;
    bool  _hasFeatureFlagKey;
    bool  _isEnabled;
}

@property (nonatomic, copy) NSString *featureFlagKey;
@property (nonatomic) bool hasFeatureFlagKey;
@property (nonatomic) bool hasIsEnabled;
@property (nonatomic) bool isEnabled;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)deleteFeatureFlagKey;
- (void)deleteIsEnabled;
- (id)dictionaryRepresentation;
- (id)featureFlagKey;
- (bool)hasFeatureFlagKey;
- (bool)hasIsEnabled;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setFeatureFlagKey:(id)arg1;
- (void)setHasFeatureFlagKey:(bool)arg1;
- (void)setHasIsEnabled:(bool)arg1;
- (void)setIsEnabled:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
