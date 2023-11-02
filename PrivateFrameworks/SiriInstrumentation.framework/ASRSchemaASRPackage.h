
@interface ASRSchemaASRPackage : SISchemaInstrumentationMessage {
    bool  _hasPostItn;
    bool  _hasRawRecognition;
    ASRSchemaASRRecognitionResult * _postItn;
    ASRSchemaASRRecognitionResult * _rawRecognition;
}

@property (nonatomic) bool hasPostItn;
@property (nonatomic) bool hasRawRecognition;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) ASRSchemaASRRecognitionResult *postItn;
@property (nonatomic, retain) ASRSchemaASRRecognitionResult *rawRecognition;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deletePostItn;
- (void)deleteRawRecognition;
- (id)dictionaryRepresentation;
- (bool)hasPostItn;
- (bool)hasRawRecognition;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)postItn;
- (id)rawRecognition;
- (bool)readFrom:(id)arg1;
- (void)setHasPostItn:(bool)arg1;
- (void)setHasRawRecognition:(bool)arg1;
- (void)setPostItn:(id)arg1;
- (void)setRawRecognition:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
