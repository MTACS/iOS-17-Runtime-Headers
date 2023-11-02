
@interface PXSmartAlbumDateValueCondition : PXSmartAlbumCondition {
    NSArray * _unitValues;
}

@property (nonatomic, retain) NSDate *dateValue;
@property (nonatomic, readonly) bool hasNumberOfUnitValue;
@property (nonatomic, retain) NSNumber *numberOfUnitValue;
@property (nonatomic, retain) NSDate *secondDateValue;
@property (nonatomic, retain) PXLabeledValue *unitValue;
@property (nonatomic, readonly) NSArray *unitValues;

- (void).cxx_destruct;
- (long long)comparatorMode;
- (id)dateValue;
- (bool)hasNumberOfUnitValue;
- (id)numberOfUnitValue;
- (id)secondDateValue;
- (void)setComparatorValue:(id)arg1;
- (void)setDateValue:(id)arg1;
- (void)setNumberOfUnitValue:(id)arg1;
- (void)setSecondDateValue:(id)arg1;
- (void)setUnitValue:(id)arg1;
- (id)unitValue;
- (id)unitValues;

@end
