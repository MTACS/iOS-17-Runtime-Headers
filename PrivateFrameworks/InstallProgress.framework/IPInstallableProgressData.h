
@interface IPInstallableProgressData : NSObject <NSCopying, NSSecureCoding> {
    double  _currentFractionCompleted;
    unsigned long long  _finalPhase;
    unsigned long long  _installPhase;
    NSMutableDictionary * _phaseStates;
}

@property (nonatomic) unsigned long long finalPhase;
@property (nonatomic) unsigned long long installPhase;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_findOrCreatePhaseState:(unsigned long long)arg1;
- (void)_recalculateCurrentFractionCompleted;
- (unsigned long long)completedUnitCountForPhase:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)finalPhase;
- (double)fractionCompleted;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)installPhase;
- (void)setCompletedUnitCount:(unsigned long long)arg1 forPhase:(unsigned long long)arg2;
- (void)setFinalPhase:(unsigned long long)arg1;
- (void)setInstallPhase:(unsigned long long)arg1;
- (void)setTotalUnitCount:(unsigned long long)arg1 forPhase:(unsigned long long)arg2;
- (void)setTotalUnitCountsForPhases:(id)arg1;
- (unsigned long long)totalUnitCountForPhase:(unsigned long long)arg1;

@end
