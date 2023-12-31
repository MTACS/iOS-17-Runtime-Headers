
@interface NTPBIssueViewData : PBCodable <NSCopying> {
    NSData * _issueViewingSessionId;
}

@property (nonatomic, readonly) bool hasIssueViewingSessionId;
@property (nonatomic, retain) NSData *issueViewingSessionId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIssueViewingSessionId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)issueViewingSessionId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIssueViewingSessionId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
