
@interface DRSProtoDiagnosticUploadRequest : PBRequest <NSCopying> {
    NSString * _issueDescription;
    NSMutableArray * _logs;
    DRSProtoRequestDescription * _requestDescription;
}

@property (nonatomic, readonly) bool hasIssueDescription;
@property (nonatomic, readonly) bool hasRequestDescription;
@property (nonatomic, retain) NSString *issueDescription;
@property (nonatomic, retain) NSMutableArray *logs;
@property (nonatomic, retain) DRSProtoRequestDescription *requestDescription;

+ (Class)logsType;

- (void).cxx_destruct;
- (void)addLogs:(id)arg1;
- (void)clearLogs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIssueDescription;
- (bool)hasRequestDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)issueDescription;
- (id)logs;
- (id)logsAtIndex:(unsigned long long)arg1;
- (unsigned long long)logsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestDescription;
- (void)setIssueDescription:(id)arg1;
- (void)setLogs:(id)arg1;
- (void)setRequestDescription:(id)arg1;
- (void)writeTo:(id)arg1;

@end
