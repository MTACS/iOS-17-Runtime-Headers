
@interface TAFilterVisitsSettings : NSObject {
    double  _entryDisplayOnBudget;
    double  _exitDisplayOnBudget;
    double  _maxSuspiciousDuration;
    double  _minInterVisitDistance;
    unsigned long long  _minNSigmaBetweenVisits;
    double  _minObservationInterval;
    NSSet * _sensitiveLOITypes;
    unsigned long long  _threeVisitImmediacyType;
}

@property (nonatomic, readonly) double entryDisplayOnBudget;
@property (nonatomic, readonly) double exitDisplayOnBudget;
@property (nonatomic, readonly) double maxSuspiciousDuration;
@property (nonatomic, readonly) double minInterVisitDistance;
@property (nonatomic, readonly) unsigned long long minNSigmaBetweenVisits;
@property (nonatomic, readonly) double minObservationInterval;
@property (nonatomic, readonly) NSSet *sensitiveLOITypes;
@property (nonatomic, readonly) unsigned long long threeVisitImmediacyType;

+ (double)_determinDefaultEntryDisplayOnBudget;
+ (double)_determinDefaultExitDisplayOnBudget;
+ (bool)_isLegacyHardware;
+ (id)defaultVisitsSensitiveLOITypes;

- (void).cxx_destruct;
- (double)entryDisplayOnBudget;
- (double)exitDisplayOnBudget;
- (id)initWithDefaults;
- (id)initWithMaxSuspiciousDuration:(double)arg1 minInterVisitDistance:(double)arg2 minNSigmaBetweenVisits:(unsigned long long)arg3 entryDisplayOnBudget:(double)arg4 exitDisplayOnBudget:(double)arg5 sensitiveLOITypes:(id)arg6 minObservationInterval:(double)arg7 threeVisitImmediacyType:(unsigned long long)arg8;
- (id)initWithMaxSuspiciousDurationOrDefault:(id)arg1 minInterVisitDistanceOrDefault:(id)arg2 minNSigmaBetweenVisitsOrDefault:(id)arg3 entryDisplayOnBudgetOrDefault:(id)arg4 exitDisplayOnBudgetOrDefault:(id)arg5 sensitiveLOITypesOrDefault:(id)arg6 minObservationIntervalOrDefault:(id)arg7 threeVisitImmediacyTypeOrDefault:(id)arg8;
- (double)maxSuspiciousDuration;
- (double)minInterVisitDistance;
- (unsigned long long)minNSigmaBetweenVisits;
- (double)minObservationInterval;
- (id)sensitiveLOITypes;
- (id)sensitiveLOITypesToString;
- (unsigned long long)threeVisitImmediacyType;

@end
