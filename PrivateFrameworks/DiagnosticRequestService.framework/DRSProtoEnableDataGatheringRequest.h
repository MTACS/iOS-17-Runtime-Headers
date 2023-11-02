
@interface DRSProtoEnableDataGatheringRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int isContinue : 1; 
    }  _has;
    bool  _isContinue;
    NSString * _logType;
    DRSProtoRequestDescription * _requestDescription;
}

@property (nonatomic) bool hasIsContinue;
@property (nonatomic, readonly) bool hasLogType;
@property (nonatomic, readonly) bool hasRequestDescription;
@property (nonatomic) bool isContinue;
@property (nonatomic, retain) NSString *logType;
@property (nonatomic, retain) DRSProtoRequestDescription *requestDescription;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsContinue;
- (bool)hasLogType;
- (bool)hasRequestDescription;
- (unsigned long long)hash;
- (bool)isContinue;
- (bool)isEqual:(id)arg1;
- (id)logType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestDescription;
- (void)setHasIsContinue:(bool)arg1;
- (void)setIsContinue:(bool)arg1;
- (void)setLogType:(id)arg1;
- (void)setRequestDescription:(id)arg1;
- (void)writeTo:(id)arg1;

@end
