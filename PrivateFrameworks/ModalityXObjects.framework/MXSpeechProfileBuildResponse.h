
@interface MXSpeechProfileBuildResponse : PBCodable <NSCopying> {
    MXProcessingError * _error;
    struct { 
        unsigned int incompleteProfile : 1; 
    }  _has;
    bool  _incompleteProfile;
    NSData * _languageProfile;
    NSData * _pronunciationCache;
    NSString * _requestId;
}

@property (nonatomic, retain) MXProcessingError *error;
@property (nonatomic, readonly) bool hasError;
@property (nonatomic) bool hasIncompleteProfile;
@property (nonatomic, readonly) bool hasLanguageProfile;
@property (nonatomic, readonly) bool hasPronunciationCache;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic) bool incompleteProfile;
@property (nonatomic, retain) NSData *languageProfile;
@property (nonatomic, retain) NSData *pronunciationCache;
@property (nonatomic, retain) NSString *requestId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasError;
- (bool)hasIncompleteProfile;
- (bool)hasLanguageProfile;
- (bool)hasPronunciationCache;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (bool)incompleteProfile;
- (bool)isEqual:(id)arg1;
- (id)languageProfile;
- (void)mergeFrom:(id)arg1;
- (id)pronunciationCache;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setError:(id)arg1;
- (void)setHasIncompleteProfile:(bool)arg1;
- (void)setIncompleteProfile:(bool)arg1;
- (void)setLanguageProfile:(id)arg1;
- (void)setPronunciationCache:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
