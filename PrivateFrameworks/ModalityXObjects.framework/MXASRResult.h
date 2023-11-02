
@interface MXASRResult : PBCodable <NSCopying> {
    MXFinalSpeechRecognitionResponse * _finalSpeechRecognitionResponse;
    struct { 
        unsigned int payload : 1; 
    }  _has;
    int  _payload;
    MXRecognitionCandidate * _recognitionCandidate;
    NSString * _requestId;
}

@property (nonatomic, retain) MXFinalSpeechRecognitionResponse *finalSpeechRecognitionResponse;
@property (nonatomic, readonly) bool hasFinalSpeechRecognitionResponse;
@property (nonatomic) bool hasPayload;
@property (nonatomic, readonly) bool hasRecognitionCandidate;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic) int payload;
@property (nonatomic, retain) MXRecognitionCandidate *recognitionCandidate;
@property (nonatomic, retain) NSString *requestId;

- (void).cxx_destruct;
- (int)StringAsPayload:(id)arg1;
- (void)clearOneofValuesForPayload;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)finalSpeechRecognitionResponse;
- (bool)hasFinalSpeechRecognitionResponse;
- (bool)hasPayload;
- (bool)hasRecognitionCandidate;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)payload;
- (id)payloadAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (id)recognitionCandidate;
- (id)requestId;
- (void)setFinalSpeechRecognitionResponse:(id)arg1;
- (void)setHasPayload:(bool)arg1;
- (void)setPayload:(int)arg1;
- (void)setRecognitionCandidate:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
