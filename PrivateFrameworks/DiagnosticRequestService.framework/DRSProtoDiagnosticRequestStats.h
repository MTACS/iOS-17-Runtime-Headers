
@interface DRSProtoDiagnosticRequestStats : PBCodable <NSCopying> {
    NSString * _build;
    NSString * _issueCategory;
    NSString * _issueDescription;
    NSMutableArray * _outcomes;
    NSString * _teamId;
}

@property (nonatomic, retain) NSString *build;
@property (nonatomic, readonly) bool hasBuild;
@property (nonatomic, readonly) bool hasIssueCategory;
@property (nonatomic, readonly) bool hasIssueDescription;
@property (nonatomic, readonly) bool hasTeamId;
@property (nonatomic, retain) NSString *issueCategory;
@property (nonatomic, retain) NSString *issueDescription;
@property (nonatomic, retain) NSMutableArray *outcomes;
@property (nonatomic, retain) NSString *teamId;

+ (Class)outcomesType;

- (void).cxx_destruct;
- (void)addOutcomes:(id)arg1;
- (id)build;
- (void)clearOutcomes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBuild;
- (bool)hasIssueCategory;
- (bool)hasIssueDescription;
- (bool)hasTeamId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)issueCategory;
- (id)issueDescription;
- (void)mergeFrom:(id)arg1;
- (id)outcomes;
- (id)outcomesAtIndex:(unsigned long long)arg1;
- (unsigned long long)outcomesCount;
- (bool)readFrom:(id)arg1;
- (void)setBuild:(id)arg1;
- (void)setIssueCategory:(id)arg1;
- (void)setIssueDescription:(id)arg1;
- (void)setOutcomes:(id)arg1;
- (void)setTeamId:(id)arg1;
- (id)teamId;
- (void)writeTo:(id)arg1;

@end
