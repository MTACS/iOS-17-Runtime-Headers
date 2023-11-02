
@interface AWDWRMAntSelPolicyStats : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int issueBand : 1; 
        unsigned int issueType : 1; 
        unsigned int hasAntConstraint : 1; 
        unsigned int isCoexBand : 1; 
    }  _has;
    bool  _hasAntConstraint;
    bool  _isCoexBand;
    unsigned int  _issueBand;
    unsigned int  _issueType;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasAntConstraint;
@property (nonatomic) bool hasHasAntConstraint;
@property (nonatomic) bool hasIsCoexBand;
@property (nonatomic) bool hasIssueBand;
@property (nonatomic) bool hasIssueType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isCoexBand;
@property (nonatomic) unsigned int issueBand;
@property (nonatomic) unsigned int issueType;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAntConstraint;
- (bool)hasHasAntConstraint;
- (bool)hasIsCoexBand;
- (bool)hasIssueBand;
- (bool)hasIssueType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isCoexBand;
- (bool)isEqual:(id)arg1;
- (unsigned int)issueBand;
- (unsigned int)issueType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasAntConstraint:(bool)arg1;
- (void)setHasHasAntConstraint:(bool)arg1;
- (void)setHasIsCoexBand:(bool)arg1;
- (void)setHasIssueBand:(bool)arg1;
- (void)setHasIssueType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsCoexBand:(bool)arg1;
- (void)setIssueBand:(unsigned int)arg1;
- (void)setIssueType:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
