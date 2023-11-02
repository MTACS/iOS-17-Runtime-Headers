
@interface HKMedicationScheduleItemQueryConfiguration : HKQueryServerConfiguration {
    NSDate * _fromDate;
    NSString * _identifier;
    NSArray * _sortDescriptors;
    NSDate * _toDate;
}

@property (nonatomic, copy) NSDate *fromDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSArray *sortDescriptors;
@property (nonatomic, copy) NSDate *toDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fromDate;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)setFromDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setToDate:(id)arg1;
- (id)sortDescriptors;
- (id)toDate;

@end
