
@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueExposureData : PBCodable <NSCopying> {
    NSData * _issueSessionId;
}

@property (nonatomic, readonly) bool hasIssueSessionId;
@property (nonatomic, retain) NSData *issueSessionId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIssueSessionId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)issueSessionId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIssueSessionId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
