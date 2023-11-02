
@interface HDWorkoutBuilderStatisticsDataSource : NSObject <HDStatisticsCollectionCalculatorDataSource> {
    HDWorkoutBuilderEntity * _builderEntity;
    bool  _enabled;
    HDProfile * _profile;
    HKQuantityType * _quantityType;
}

@property (nonatomic, readonly) HDWorkoutBuilderEntity *builderEntity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly, copy) HKQuantityType *quantityType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)builderEntity;
- (bool)collectionCalculator:(id)arg1 queryForInterval:(id)arg2 error:(id*)arg3 sampleHandler:(id /* block */)arg4 mergeHandler:(id /* block */)arg5;
- (bool)enabled;
- (id)init;
- (id)initWithProfile:(id)arg1 quantityType:(id)arg2 builderEntity:(id)arg3;
- (id)profile;
- (id)quantityType;
- (void)setEnabled:(bool)arg1;

@end
