
@interface MXClientBoundFrame : PBCodable <NSCopying> {
    MXASRResult * _asrResult;
    struct { 
        unsigned int payload : 1; 
    }  _has;
    int  _payload;
    MXProcessingError * _processingError;
    MXRequestComplete * _requestComplete;
    MXRequestMitigated * _requestMitigated;
    MXSpeechProfileRebuildNeeded * _speechProfileRebuildNeeded;
    MXSpeechProfileBuildResponse * _speechProfileResponse;
}

@property (nonatomic, retain) MXASRResult *asrResult;
@property (nonatomic, readonly) bool hasAsrResult;
@property (nonatomic) bool hasPayload;
@property (nonatomic, readonly) bool hasProcessingError;
@property (nonatomic, readonly) bool hasRequestComplete;
@property (nonatomic, readonly) bool hasRequestMitigated;
@property (nonatomic, readonly) bool hasSpeechProfileRebuildNeeded;
@property (nonatomic, readonly) bool hasSpeechProfileResponse;
@property (nonatomic) int payload;
@property (nonatomic, retain) MXProcessingError *processingError;
@property (nonatomic, retain) MXRequestComplete *requestComplete;
@property (nonatomic, retain) MXRequestMitigated *requestMitigated;
@property (nonatomic, retain) MXSpeechProfileRebuildNeeded *speechProfileRebuildNeeded;
@property (nonatomic, retain) MXSpeechProfileBuildResponse *speechProfileResponse;

- (void).cxx_destruct;
- (int)StringAsPayload:(id)arg1;
- (id)asrResult;
- (void)clearOneofValuesForPayload;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAsrResult;
- (bool)hasPayload;
- (bool)hasProcessingError;
- (bool)hasRequestComplete;
- (bool)hasRequestMitigated;
- (bool)hasSpeechProfileRebuildNeeded;
- (bool)hasSpeechProfileResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)payload;
- (id)payloadAsString:(int)arg1;
- (id)processingError;
- (bool)readFrom:(id)arg1;
- (id)requestComplete;
- (id)requestMitigated;
- (void)setAsrResult:(id)arg1;
- (void)setHasPayload:(bool)arg1;
- (void)setPayload:(int)arg1;
- (void)setProcessingError:(id)arg1;
- (void)setRequestComplete:(id)arg1;
- (void)setRequestMitigated:(id)arg1;
- (void)setSpeechProfileRebuildNeeded:(id)arg1;
- (void)setSpeechProfileResponse:(id)arg1;
- (id)speechProfileRebuildNeeded;
- (id)speechProfileResponse;
- (void)writeTo:(id)arg1;

@end
