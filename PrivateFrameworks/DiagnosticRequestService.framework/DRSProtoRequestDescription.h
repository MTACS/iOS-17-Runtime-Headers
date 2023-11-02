
@interface DRSProtoRequestDescription : PBCodable <NSCopying> {
    NSString * _build;
    NSData * _contextDictionaryData;
    struct { 
        unsigned int requestTime : 1; 
    }  _has;
    NSString * _issueCategory;
    unsigned long long  _requestTime;
    NSString * _teamId;
}

@property (nonatomic, retain) NSString *build;
@property (nonatomic, retain) NSData *contextDictionaryData;
@property (nonatomic, readonly) bool hasBuild;
@property (nonatomic, readonly) bool hasContextDictionaryData;
@property (nonatomic, readonly) bool hasIssueCategory;
@property (nonatomic) bool hasRequestTime;
@property (nonatomic, readonly) bool hasTeamId;
@property (nonatomic, retain) NSString *issueCategory;
@property (nonatomic) unsigned long long requestTime;
@property (nonatomic, retain) NSString *teamId;

- (void).cxx_destruct;
- (id)build;
- (id)contextDictionaryData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBuild;
- (bool)hasContextDictionaryData;
- (bool)hasIssueCategory;
- (bool)hasRequestTime;
- (bool)hasTeamId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)issueCategory;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)requestTime;
- (void)setBuild:(id)arg1;
- (void)setContextDictionaryData:(id)arg1;
- (void)setHasRequestTime:(bool)arg1;
- (void)setIssueCategory:(id)arg1;
- (void)setRequestTime:(unsigned long long)arg1;
- (void)setTeamId:(id)arg1;
- (id)teamId;
- (void)writeTo:(id)arg1;

@end
