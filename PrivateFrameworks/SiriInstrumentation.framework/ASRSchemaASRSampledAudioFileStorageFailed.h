
@interface ASRSchemaASRSampledAudioFileStorageFailed : SISchemaInstrumentationMessage {
    int  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int underlyingErrorCode : 1; 
        unsigned int sampledAudioStorageFailureReason : 1; 
    }  _has;
    bool  _hasErrorDomain;
    bool  _hasUnderlyingErrorDomain;
    int  _sampledAudioStorageFailureReason;
    int  _underlyingErrorCode;
    NSString * _underlyingErrorDomain;
}

@property (nonatomic) int errorCode;
@property (nonatomic, copy) NSString *errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasErrorDomain;
@property (nonatomic) bool hasSampledAudioStorageFailureReason;
@property (nonatomic) bool hasUnderlyingErrorCode;
@property (nonatomic) bool hasUnderlyingErrorDomain;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int sampledAudioStorageFailureReason;
@property (nonatomic) int underlyingErrorCode;
@property (nonatomic, copy) NSString *underlyingErrorDomain;

- (void).cxx_destruct;
- (void)deleteErrorCode;
- (void)deleteErrorDomain;
- (void)deleteSampledAudioStorageFailureReason;
- (void)deleteUnderlyingErrorCode;
- (void)deleteUnderlyingErrorDomain;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasSampledAudioStorageFailureReason;
- (bool)hasUnderlyingErrorCode;
- (bool)hasUnderlyingErrorDomain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)sampledAudioStorageFailureReason;
- (void)setErrorCode:(int)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasErrorDomain:(bool)arg1;
- (void)setHasSampledAudioStorageFailureReason:(bool)arg1;
- (void)setHasUnderlyingErrorCode:(bool)arg1;
- (void)setHasUnderlyingErrorDomain:(bool)arg1;
- (void)setSampledAudioStorageFailureReason:(int)arg1;
- (void)setUnderlyingErrorCode:(int)arg1;
- (void)setUnderlyingErrorDomain:(id)arg1;
- (id)suppressMessageUnderConditions;
- (int)underlyingErrorCode;
- (id)underlyingErrorDomain;
- (void)writeTo:(id)arg1;

@end
