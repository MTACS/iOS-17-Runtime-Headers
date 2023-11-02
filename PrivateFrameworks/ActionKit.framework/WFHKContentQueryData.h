
@interface WFHKContentQueryData : NSObject {
    HKCategoryType * _categoryType;
    NSDate * _endDate;
    HKQuantityType * _quantityType;
    NSString * _sourceName;
    NSDate * _startDate;
}

@property (nonatomic, retain) HKCategoryType *categoryType;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) HKQuantityType *quantityType;
@property (nonatomic, readonly) HKSampleType *sampleType;
@property (nonatomic, retain) NSString *sourceName;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)categoryType;
- (id)endDate;
- (id)quantityType;
- (id)sampleType;
- (void)setCategoryType:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setQuantityType:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)sourceName;
- (id)startDate;

@end
