
@interface ABCPbSummarySignatureRequest : PBRequest <NSCopying> {
    NSMutableArray * _attachments;
    NSString * _build;
    NSString * _buildVariant;
    double  _caseClosedTime;
    NSString * _caseClosureType;
    NSString * _caseContext;
    NSString * _caseDampeningType;
    NSString * _caseEffectiveProcess;
    NSString * _caseGroupIdentifier;
    NSString * _caseIdentifier;
    NSString * _caseRelatedProcesses;
    double  _caseStartTime;
    NSString * _caseThresholdValues;
    NSString * _domain;
    struct { 
        unsigned int caseClosedTime : 1; 
        unsigned int caseStartTime : 1; 
        unsigned int logSizeTotal : 1; 
        unsigned int remoteTrigger : 1; 
    }  _has;
    unsigned int  _logSizeTotal;
    NSString * _process;
    bool  _remoteTrigger;
    NSString * _subtype;
    NSString * _subtypeContext;
    NSString * _type;
}

@property (nonatomic, retain) NSMutableArray *attachments;
@property (nonatomic, retain) NSString *build;
@property (nonatomic, retain) NSString *buildVariant;
@property (nonatomic) double caseClosedTime;
@property (nonatomic, retain) NSString *caseClosureType;
@property (nonatomic, retain) NSString *caseContext;
@property (nonatomic, retain) NSString *caseDampeningType;
@property (nonatomic, retain) NSString *caseEffectiveProcess;
@property (nonatomic, retain) NSString *caseGroupIdentifier;
@property (nonatomic, retain) NSString *caseIdentifier;
@property (nonatomic, retain) NSString *caseRelatedProcesses;
@property (nonatomic) double caseStartTime;
@property (nonatomic, retain) NSString *caseThresholdValues;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, readonly) bool hasBuild;
@property (nonatomic, readonly) bool hasBuildVariant;
@property (nonatomic) bool hasCaseClosedTime;
@property (nonatomic, readonly) bool hasCaseClosureType;
@property (nonatomic, readonly) bool hasCaseContext;
@property (nonatomic, readonly) bool hasCaseDampeningType;
@property (nonatomic, readonly) bool hasCaseEffectiveProcess;
@property (nonatomic, readonly) bool hasCaseGroupIdentifier;
@property (nonatomic, readonly) bool hasCaseIdentifier;
@property (nonatomic, readonly) bool hasCaseRelatedProcesses;
@property (nonatomic) bool hasCaseStartTime;
@property (nonatomic, readonly) bool hasCaseThresholdValues;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic) bool hasLogSizeTotal;
@property (nonatomic, readonly) bool hasProcess;
@property (nonatomic) bool hasRemoteTrigger;
@property (nonatomic, readonly) bool hasSubtype;
@property (nonatomic, readonly) bool hasSubtypeContext;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic) unsigned int logSizeTotal;
@property (nonatomic, retain) NSString *process;
@property (nonatomic) bool remoteTrigger;
@property (nonatomic, retain) NSString *subtype;
@property (nonatomic, retain) NSString *subtypeContext;
@property (nonatomic, retain) NSString *type;

+ (Class)attachmentsType;

- (void).cxx_destruct;
- (void)addAttachments:(id)arg1;
- (id)attachments;
- (id)attachmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attachmentsCount;
- (id)build;
- (id)buildVariant;
- (double)caseClosedTime;
- (id)caseClosureType;
- (id)caseContext;
- (id)caseDampeningType;
- (id)caseEffectiveProcess;
- (id)caseGroupIdentifier;
- (id)caseIdentifier;
- (id)caseRelatedProcesses;
- (double)caseStartTime;
- (id)caseThresholdValues;
- (void)clearAttachments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasBuild;
- (bool)hasBuildVariant;
- (bool)hasCaseClosedTime;
- (bool)hasCaseClosureType;
- (bool)hasCaseContext;
- (bool)hasCaseDampeningType;
- (bool)hasCaseEffectiveProcess;
- (bool)hasCaseGroupIdentifier;
- (bool)hasCaseIdentifier;
- (bool)hasCaseRelatedProcesses;
- (bool)hasCaseStartTime;
- (bool)hasCaseThresholdValues;
- (bool)hasDomain;
- (bool)hasLogSizeTotal;
- (bool)hasProcess;
- (bool)hasRemoteTrigger;
- (bool)hasSubtype;
- (bool)hasSubtypeContext;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)logSizeTotal;
- (void)mergeFrom:(id)arg1;
- (id)process;
- (bool)readFrom:(id)arg1;
- (bool)remoteTrigger;
- (void)setAttachments:(id)arg1;
- (void)setBuild:(id)arg1;
- (void)setBuildVariant:(id)arg1;
- (void)setCaseClosedTime:(double)arg1;
- (void)setCaseClosureType:(id)arg1;
- (void)setCaseContext:(id)arg1;
- (void)setCaseDampeningType:(id)arg1;
- (void)setCaseEffectiveProcess:(id)arg1;
- (void)setCaseGroupIdentifier:(id)arg1;
- (void)setCaseIdentifier:(id)arg1;
- (void)setCaseRelatedProcesses:(id)arg1;
- (void)setCaseStartTime:(double)arg1;
- (void)setCaseThresholdValues:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasCaseClosedTime:(bool)arg1;
- (void)setHasCaseStartTime:(bool)arg1;
- (void)setHasLogSizeTotal:(bool)arg1;
- (void)setHasRemoteTrigger:(bool)arg1;
- (void)setLogSizeTotal:(unsigned int)arg1;
- (void)setProcess:(id)arg1;
- (void)setRemoteTrigger:(bool)arg1;
- (void)setSubtype:(id)arg1;
- (void)setSubtypeContext:(id)arg1;
- (void)setType:(id)arg1;
- (id)subtype;
- (id)subtypeContext;
- (id)type;
- (void)writeTo:(id)arg1;

@end
