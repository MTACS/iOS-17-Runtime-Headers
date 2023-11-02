
@interface ASRSchemaASRIntermediateUtteranceInfoTier1 : SISchemaInstrumentationMessage {
    bool  _hasLoggableSharedUserId;
    bool  _hasPhoneticMatchInput;
    bool  _hasPhoneticMatchOutput;
    bool  _hasUnrepairedPostItn;
    NSString * _loggableSharedUserId;
    NSString * _phoneticMatchInput;
    NSString * _phoneticMatchOutput;
    NSString * _unrepairedPostItn;
}

@property (nonatomic) bool hasLoggableSharedUserId;
@property (nonatomic) bool hasPhoneticMatchInput;
@property (nonatomic) bool hasPhoneticMatchOutput;
@property (nonatomic) bool hasUnrepairedPostItn;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *loggableSharedUserId;
@property (nonatomic, copy) NSString *phoneticMatchInput;
@property (nonatomic, copy) NSString *phoneticMatchOutput;
@property (nonatomic, copy) NSString *unrepairedPostItn;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteLoggableSharedUserId;
- (void)deletePhoneticMatchInput;
- (void)deletePhoneticMatchOutput;
- (void)deleteUnrepairedPostItn;
- (id)dictionaryRepresentation;
- (bool)hasLoggableSharedUserId;
- (bool)hasPhoneticMatchInput;
- (bool)hasPhoneticMatchOutput;
- (bool)hasUnrepairedPostItn;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)loggableSharedUserId;
- (id)phoneticMatchInput;
- (id)phoneticMatchOutput;
- (bool)readFrom:(id)arg1;
- (void)setHasLoggableSharedUserId:(bool)arg1;
- (void)setHasPhoneticMatchInput:(bool)arg1;
- (void)setHasPhoneticMatchOutput:(bool)arg1;
- (void)setHasUnrepairedPostItn:(bool)arg1;
- (void)setLoggableSharedUserId:(id)arg1;
- (void)setPhoneticMatchInput:(id)arg1;
- (void)setPhoneticMatchOutput:(id)arg1;
- (void)setUnrepairedPostItn:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)unrepairedPostItn;
- (void)writeTo:(id)arg1;

@end
