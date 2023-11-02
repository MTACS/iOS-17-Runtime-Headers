
@interface OTCDPRecoveryInformation : PBCodable <NSCopying> {
    bool  _containsIcdpData;
    struct { 
        unsigned int containsIcdpData : 1; 
        unsigned int silentRecoveryAttempt : 1; 
        unsigned int useCachedSecret : 1; 
        unsigned int usePreviouslyCachedRecoveryKey : 1; 
        unsigned int usesMultipleIcsc : 1; 
    }  _has;
    NSString * _recoveryKey;
    NSString * _recoverySecret;
    bool  _silentRecoveryAttempt;
    bool  _useCachedSecret;
    bool  _usePreviouslyCachedRecoveryKey;
    bool  _usesMultipleIcsc;
}

@property (nonatomic) bool containsIcdpData;
@property (nonatomic) bool hasContainsIcdpData;
@property (nonatomic, readonly) bool hasRecoveryKey;
@property (nonatomic, readonly) bool hasRecoverySecret;
@property (nonatomic) bool hasSilentRecoveryAttempt;
@property (nonatomic) bool hasUseCachedSecret;
@property (nonatomic) bool hasUsePreviouslyCachedRecoveryKey;
@property (nonatomic) bool hasUsesMultipleIcsc;
@property (nonatomic, retain) NSString *recoveryKey;
@property (nonatomic, retain) NSString *recoverySecret;
@property (nonatomic) bool silentRecoveryAttempt;
@property (nonatomic) bool useCachedSecret;
@property (nonatomic) bool usePreviouslyCachedRecoveryKey;
@property (nonatomic) bool usesMultipleIcsc;

- (void).cxx_destruct;
- (bool)containsIcdpData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContainsIcdpData;
- (bool)hasRecoveryKey;
- (bool)hasRecoverySecret;
- (bool)hasSilentRecoveryAttempt;
- (bool)hasUseCachedSecret;
- (bool)hasUsePreviouslyCachedRecoveryKey;
- (bool)hasUsesMultipleIcsc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recoveryKey;
- (id)recoverySecret;
- (void)setContainsIcdpData:(bool)arg1;
- (void)setHasContainsIcdpData:(bool)arg1;
- (void)setHasSilentRecoveryAttempt:(bool)arg1;
- (void)setHasUseCachedSecret:(bool)arg1;
- (void)setHasUsePreviouslyCachedRecoveryKey:(bool)arg1;
- (void)setHasUsesMultipleIcsc:(bool)arg1;
- (void)setRecoveryKey:(id)arg1;
- (void)setRecoverySecret:(id)arg1;
- (void)setSilentRecoveryAttempt:(bool)arg1;
- (void)setUseCachedSecret:(bool)arg1;
- (void)setUsePreviouslyCachedRecoveryKey:(bool)arg1;
- (void)setUsesMultipleIcsc:(bool)arg1;
- (bool)silentRecoveryAttempt;
- (bool)useCachedSecret;
- (bool)usePreviouslyCachedRecoveryKey;
- (bool)usesMultipleIcsc;
- (void)writeTo:(id)arg1;

@end
