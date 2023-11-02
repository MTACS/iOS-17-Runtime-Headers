
@interface TPPBPolicyProhibits : PBCodable <NSCopying> {
    NSString * _candidateCategory;
    NSString * _explanation;
    struct { 
        unsigned int policyVersion : 1; 
    }  _has;
    unsigned long long  _policyVersion;
    NSString * _sponsorCategory;
    NSString * _sponsorId;
}

@property (nonatomic, retain) NSString *candidateCategory;
@property (nonatomic, retain) NSString *explanation;
@property (nonatomic, readonly) bool hasCandidateCategory;
@property (nonatomic, readonly) bool hasExplanation;
@property (nonatomic) bool hasPolicyVersion;
@property (nonatomic, readonly) bool hasSponsorCategory;
@property (nonatomic, readonly) bool hasSponsorId;
@property (nonatomic) unsigned long long policyVersion;
@property (nonatomic, retain) NSString *sponsorCategory;
@property (nonatomic, retain) NSString *sponsorId;

- (void).cxx_destruct;
- (id)candidateCategory;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)explanation;
- (bool)hasCandidateCategory;
- (bool)hasExplanation;
- (bool)hasPolicyVersion;
- (bool)hasSponsorCategory;
- (bool)hasSponsorId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)policyVersion;
- (bool)readFrom:(id)arg1;
- (void)setCandidateCategory:(id)arg1;
- (void)setExplanation:(id)arg1;
- (void)setHasPolicyVersion:(bool)arg1;
- (void)setPolicyVersion:(unsigned long long)arg1;
- (void)setSponsorCategory:(id)arg1;
- (void)setSponsorId:(id)arg1;
- (id)sponsorCategory;
- (id)sponsorId;
- (void)writeTo:(id)arg1;

@end
