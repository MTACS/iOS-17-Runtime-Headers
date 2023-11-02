
@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueData : PBCodable <NSCopying> {
    struct { 
        unsigned int issueType : 1; 
        unsigned int isBundlePaid : 1; 
    }  _has;
    bool  _isBundlePaid;
    NSString * _issueId;
    int  _issueType;
    NSMutableArray * _topicIds;
}

@property (nonatomic) bool hasIsBundlePaid;
@property (nonatomic, readonly) bool hasIssueId;
@property (nonatomic) bool hasIssueType;
@property (nonatomic) bool isBundlePaid;
@property (nonatomic, retain) NSString *issueId;
@property (nonatomic) int issueType;
@property (nonatomic, retain) NSMutableArray *topicIds;

+ (Class)topicIdsType;

- (void).cxx_destruct;
- (int)StringAsIssueType:(id)arg1;
- (void)addTopicIds:(id)arg1;
- (void)clearTopicIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsBundlePaid;
- (bool)hasIssueId;
- (bool)hasIssueType;
- (unsigned long long)hash;
- (bool)isBundlePaid;
- (bool)isEqual:(id)arg1;
- (id)issueId;
- (int)issueType;
- (id)issueTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsBundlePaid:(bool)arg1;
- (void)setHasIssueType:(bool)arg1;
- (void)setIsBundlePaid:(bool)arg1;
- (void)setIssueId:(id)arg1;
- (void)setIssueType:(int)arg1;
- (void)setTopicIds:(id)arg1;
- (id)topicIds;
- (id)topicIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicIdsCount;
- (void)writeTo:(id)arg1;

@end
