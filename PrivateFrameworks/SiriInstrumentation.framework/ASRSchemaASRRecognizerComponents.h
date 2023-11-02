
@interface ASRSchemaASRRecognizerComponents : SISchemaInstrumentationMessage {
    NSString * _decodable;
    NSString * _decoder;
    NSString * _frontend;
    bool  _hasDecodable;
    bool  _hasDecoder;
    bool  _hasFrontend;
}

@property (nonatomic, copy) NSString *decodable;
@property (nonatomic, copy) NSString *decoder;
@property (nonatomic, copy) NSString *frontend;
@property (nonatomic) bool hasDecodable;
@property (nonatomic) bool hasDecoder;
@property (nonatomic) bool hasFrontend;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (id)decodable;
- (id)decoder;
- (void)deleteDecodable;
- (void)deleteDecoder;
- (void)deleteFrontend;
- (id)dictionaryRepresentation;
- (id)frontend;
- (bool)hasDecodable;
- (bool)hasDecoder;
- (bool)hasFrontend;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDecodable:(id)arg1;
- (void)setDecoder:(id)arg1;
- (void)setFrontend:(id)arg1;
- (void)setHasDecodable:(bool)arg1;
- (void)setHasDecoder:(bool)arg1;
- (void)setHasFrontend:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
