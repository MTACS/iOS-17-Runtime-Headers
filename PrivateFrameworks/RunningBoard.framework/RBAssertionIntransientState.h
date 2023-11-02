
@interface RBAssertionIntransientState : NSObject <NSCopying> {
    bool  _definesRelativeStartTime;
    NSString * _domainAttributes;
    unsigned long long  _endPolicy;
    bool  _hasDomainAttribute;
    bool  _hasHereditaryGrant;
    NSMutableDictionary * _invalidatesOnConditions;
    bool  _invalidatesSynchronously;
    double  _invalidationDuration;
    bool  _isPersistent;
    unsigned long long  _legacyReason;
    bool  _preventsSuspension;
    unsigned long long  _runningReason;
    NSMutableSet * _sourceEnvironments;
    unsigned long long  _startPolicy;
    bool  _suspendsOnOriginatorSuspension;
    bool  _terminateTargetOnOriginatorExit;
    double  _warningDuration;
}

@property (nonatomic) bool definesRelativeStartTime;
@property (nonatomic, retain) NSString *domainAttributes;
@property (nonatomic) unsigned long long endPolicy;
@property (nonatomic) bool hasDomainAttribute;
@property (nonatomic) bool hasHereditaryGrant;
@property (nonatomic, retain) NSMutableDictionary *invalidatesOnConditions;
@property (nonatomic) bool invalidatesSynchronously;
@property (nonatomic) double invalidationDuration;
@property (nonatomic) bool isPersistent;
@property (nonatomic) unsigned long long legacyReason;
@property (nonatomic) bool preventsSuspension;
@property (nonatomic) unsigned long long runningReason;
@property (nonatomic, readonly) NSMutableSet *sourceEnvironments;
@property (nonatomic) unsigned long long startPolicy;
@property (nonatomic) bool suspendsOnOriginatorSuspension;
@property (nonatomic) bool terminateTargetOnOriginatorExit;
@property (nonatomic) double warningDuration;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)definesRelativeStartTime;
- (id)description;
- (id)domainAttributes;
- (unsigned long long)endPolicy;
- (bool)hasDomainAttribute;
- (bool)hasHereditaryGrant;
- (id)invalidatesOnConditions;
- (bool)invalidatesSynchronously;
- (double)invalidationDuration;
- (bool)isEqual:(id)arg1;
- (bool)isPersistent;
- (unsigned long long)legacyReason;
- (bool)preventsSuspension;
- (unsigned long long)runningReason;
- (void)setDefinesRelativeStartTime:(bool)arg1;
- (void)setDomainAttributes:(id)arg1;
- (void)setEndPolicy:(unsigned long long)arg1;
- (void)setHasDomainAttribute:(bool)arg1;
- (void)setHasHereditaryGrant:(bool)arg1;
- (void)setInvalidatesOnConditions:(id)arg1;
- (void)setInvalidatesSynchronously:(bool)arg1;
- (void)setInvalidationDuration:(double)arg1;
- (void)setIsPersistent:(bool)arg1;
- (void)setLegacyReason:(unsigned long long)arg1;
- (void)setPreventsSuspension:(bool)arg1;
- (void)setRunningReason:(unsigned long long)arg1;
- (void)setStartPolicy:(unsigned long long)arg1;
- (void)setSuspendsOnOriginatorSuspension:(bool)arg1;
- (void)setTerminateTargetOnOriginatorExit:(bool)arg1;
- (void)setWarningDuration:(double)arg1;
- (id)sourceEnvironments;
- (unsigned long long)startPolicy;
- (bool)suspendsOnOriginatorSuspension;
- (bool)terminateTargetOnOriginatorExit;
- (double)warningDuration;

@end
