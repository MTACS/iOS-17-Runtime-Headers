
@interface ABCPbSigResponse : PBCodable <NSCopying> {
    unsigned int  _caseCount;
    unsigned int  _caseCountTarget;
    NSString * _caseIdentifier;
    NSString * _caseStatus;
    bool  _decision;
    struct { 
        unsigned int caseCount : 1; 
        unsigned int caseCountTarget : 1; 
        unsigned int decision : 1; 
    }  _has;
}

@property (nonatomic) unsigned int caseCount;
@property (nonatomic) unsigned int caseCountTarget;
@property (nonatomic, retain) NSString *caseIdentifier;
@property (nonatomic, retain) NSString *caseStatus;
@property (nonatomic) bool decision;
@property (nonatomic) bool hasCaseCount;
@property (nonatomic) bool hasCaseCountTarget;
@property (nonatomic, readonly) bool hasCaseIdentifier;
@property (nonatomic, readonly) bool hasCaseStatus;
@property (nonatomic) bool hasDecision;

- (void).cxx_destruct;
- (unsigned int)caseCount;
- (unsigned int)caseCountTarget;
- (id)caseIdentifier;
- (id)caseStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)decision;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCaseCount;
- (bool)hasCaseCountTarget;
- (bool)hasCaseIdentifier;
- (bool)hasCaseStatus;
- (bool)hasDecision;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCaseCount:(unsigned int)arg1;
- (void)setCaseCountTarget:(unsigned int)arg1;
- (void)setCaseIdentifier:(id)arg1;
- (void)setCaseStatus:(id)arg1;
- (void)setDecision:(bool)arg1;
- (void)setHasCaseCount:(bool)arg1;
- (void)setHasCaseCountTarget:(bool)arg1;
- (void)setHasDecision:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
