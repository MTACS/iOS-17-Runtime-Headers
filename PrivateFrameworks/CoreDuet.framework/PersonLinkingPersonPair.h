
@interface PersonLinkingPersonPair : PBCodable <NSCopying> {
    float  _confidence;
    bool  _grade;
    struct { 
        unsigned int confidence : 1; 
        unsigned int grade : 1; 
    }  _has;
    NSString * _reason;
    PersonLinkingPerson * _sourcePerson;
    PersonLinkingPerson * _targetPerson;
}

@property (nonatomic) float confidence;
@property (nonatomic) bool grade;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasGrade;
@property (nonatomic, readonly) bool hasReason;
@property (nonatomic, readonly) bool hasSourcePerson;
@property (nonatomic, readonly) bool hasTargetPerson;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) PersonLinkingPerson *sourcePerson;
@property (nonatomic, retain) PersonLinkingPerson *targetPerson;

- (void).cxx_destruct;
- (float)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)grade;
- (bool)hasConfidence;
- (bool)hasGrade;
- (bool)hasReason;
- (bool)hasSourcePerson;
- (bool)hasTargetPerson;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reason;
- (void)setConfidence:(float)arg1;
- (void)setGrade:(bool)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasGrade:(bool)arg1;
- (void)setReason:(id)arg1;
- (void)setSourcePerson:(id)arg1;
- (void)setTargetPerson:(id)arg1;
- (id)sourcePerson;
- (id)targetPerson;
- (void)writeTo:(id)arg1;

@end
