
@interface HDStatisticsCollectionCalculatorDefaultSourceOrderProvider : NSObject <HDStatisticsCollectionCalculatorSourceOrderProvider> {
    HDProfile * _profile;
    HKQuantityType * _quantityType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly, copy) HKQuantityType *quantityType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithProfile:(id)arg1 quantityType:(id)arg2;
- (id)orderedSourceIDsWithUnorderedIDs:(id)arg1;
- (id)profile;
- (id)quantityType;
- (id)sourceForSourceID:(long long)arg1;

@end
