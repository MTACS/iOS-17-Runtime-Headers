
@interface MXStreamingSpeechProfileAddData : PBCodable <NSCopying> {
    NSData * _existingLanguageProfile;
    NSData * _existingPronunciationCache;
    NSString * _requestId;
    MXSpeechProfileSourceData * _sourceData;
}

@property (nonatomic, retain) NSData *existingLanguageProfile;
@property (nonatomic, retain) NSData *existingPronunciationCache;
@property (nonatomic, readonly) bool hasExistingLanguageProfile;
@property (nonatomic, readonly) bool hasExistingPronunciationCache;
@property (nonatomic, readonly) bool hasRequestId;
@property (nonatomic, readonly) bool hasSourceData;
@property (nonatomic, retain) NSString *requestId;
@property (nonatomic, retain) MXSpeechProfileSourceData *sourceData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)existingLanguageProfile;
- (id)existingPronunciationCache;
- (bool)hasExistingLanguageProfile;
- (bool)hasExistingPronunciationCache;
- (bool)hasRequestId;
- (bool)hasSourceData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestId;
- (void)setExistingLanguageProfile:(id)arg1;
- (void)setExistingPronunciationCache:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setSourceData:(id)arg1;
- (id)sourceData;
- (void)writeTo:(id)arg1;

@end
