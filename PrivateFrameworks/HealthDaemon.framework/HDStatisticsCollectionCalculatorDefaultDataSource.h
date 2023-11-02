
@interface HDStatisticsCollectionCalculatorDefaultDataSource : NSObject <HDStatisticsCollectionCalculatorDataSource, HDStatisticsCollectionQueryServerDataSource> {
    NSNumber * _anchor;
    _HKFilter * _filter;
    HDSQLitePredicate * _fullPredicate;
    bool  _includeUnfrozenSeries;
    bool  _isRealQuantityType;
    NSNumber * _maxRowID;
    HDSQLitePredicate * _predicate;
    HDProfile * _profile;
    HKQuantityType * _quantityType;
    NSSet * _restrictedSourceEntities;
    long long  _shouldContinueFrequency;
    id /* block */  _shouldContinueHandler;
}

@property (nonatomic, copy) NSNumber *anchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) _HKFilter *filter;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeUnfrozenSeries;
@property (nonatomic, readonly, copy) NSNumber *maxRowID;
@property (nonatomic, copy) HDSQLitePredicate *predicate;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly, copy) HKQuantityType *quantityType;
@property (nonatomic, copy) NSSet *restrictedSourceEntities;
@property (nonatomic) long long shouldContinueFrequency;
@property (nonatomic, copy) id /* block */ shouldContinueHandler;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (void).cxx_destruct;
- (bool)addValuesForQuantitySamples:(id)arg1 calculator:(id)arg2 includeSeries:(bool)arg3 error:(id*)arg4;
- (id)anchor;
- (bool)collectionCalculator:(id)arg1 queryForInterval:(id)arg2 error:(id*)arg3 sampleHandler:(id /* block */)arg4 mergeHandler:(id /* block */)arg5;
- (id)filter;
- (bool)includeUnfrozenSeries;
- (id)initForProfile:(id)arg1 categoryType:(id)arg2 predicate:(id)arg3 restrictedSourceEntities:(id)arg4;
- (id)initForProfile:(id)arg1 quantityType:(id)arg2 predicate:(id)arg3 restrictedSourceEntities:(id)arg4;
- (id)maxRowID;
- (id)predicate;
- (id)profile;
- (id)quantityType;
- (id)restrictedSourceEntities;
- (void)setAnchor:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setIncludeUnfrozenSeries:(bool)arg1;
- (void)setPredicate:(id)arg1;
- (void)setRestrictedSourceEntities:(id)arg1;
- (void)setShouldContinueFrequency:(long long)arg1;
- (void)setShouldContinueHandler:(id /* block */)arg1;
- (long long)shouldContinueFrequency;
- (id /* block */)shouldContinueHandler;

// Image: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon

- (id)hearing_addQuantitySamples:(id)arg1 calculator:(id)arg2 error:(id*)arg3;

@end
