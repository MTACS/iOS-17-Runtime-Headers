
@interface ABCPbSigRequest : PBRequest <NSCopying> {
    NSString * _build;
    NSString * _buildVariant;
    NSString * _caseGroupIdentifier;
    NSString * _caseIdentifier;
    NSString * _domain;
    struct { 
        unsigned int logSizeTotal : 1; 
    }  _has;
    unsigned int  _logSizeTotal;
    NSString * _process;
    NSString * _subtype;
    NSString * _subtypeContext;
    NSString * _type;
}

@property (nonatomic, retain) NSString *build;
@property (nonatomic, retain) NSString *buildVariant;
@property (nonatomic, retain) NSString *caseGroupIdentifier;
@property (nonatomic, retain) NSString *caseIdentifier;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, readonly) bool hasBuild;
@property (nonatomic, readonly) bool hasBuildVariant;
@property (nonatomic, readonly) bool hasCaseGroupIdentifier;
@property (nonatomic, readonly) bool hasCaseIdentifier;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic) bool hasLogSizeTotal;
@property (nonatomic, readonly) bool hasProcess;
@property (nonatomic, readonly) bool hasSubtype;
@property (nonatomic, readonly) bool hasSubtypeContext;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic) unsigned int logSizeTotal;
@property (nonatomic, retain) NSString *process;
@property (nonatomic, retain) NSString *subtype;
@property (nonatomic, retain) NSString *subtypeContext;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (id)build;
- (id)buildVariant;
- (id)caseGroupIdentifier;
- (id)caseIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasBuild;
- (bool)hasBuildVariant;
- (bool)hasCaseGroupIdentifier;
- (bool)hasCaseIdentifier;
- (bool)hasDomain;
- (bool)hasLogSizeTotal;
- (bool)hasProcess;
- (bool)hasSubtype;
- (bool)hasSubtypeContext;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)logSizeTotal;
- (void)mergeFrom:(id)arg1;
- (id)process;
- (bool)readFrom:(id)arg1;
- (void)setBuild:(id)arg1;
- (void)setBuildVariant:(id)arg1;
- (void)setCaseGroupIdentifier:(id)arg1;
- (void)setCaseIdentifier:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasLogSizeTotal:(bool)arg1;
- (void)setLogSizeTotal:(unsigned int)arg1;
- (void)setProcess:(id)arg1;
- (void)setSubtype:(id)arg1;
- (void)setSubtypeContext:(id)arg1;
- (void)setType:(id)arg1;
- (id)subtype;
- (id)subtypeContext;
- (id)type;
- (void)writeTo:(id)arg1;

@end
