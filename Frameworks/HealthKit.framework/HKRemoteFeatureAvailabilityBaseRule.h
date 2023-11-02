
@interface HKRemoteFeatureAvailabilityBaseRule : NSObject {
    <HKRemoteFeatureAvailabilityDataSource> * _dataSource;
}

@property (nonatomic) <HKRemoteFeatureAvailabilityDataSource> *dataSource;

+ (Class)ruleClassForRawValue:(id)arg1;

- (void).cxx_destruct;
- (id)dataSource;
- (bool)evaluate;
- (id)initWithRawValue:(id)arg1 dataSource:(id)arg2;
- (void)processUserInfo:(id)arg1;
- (void)setDataSource:(id)arg1;

@end
