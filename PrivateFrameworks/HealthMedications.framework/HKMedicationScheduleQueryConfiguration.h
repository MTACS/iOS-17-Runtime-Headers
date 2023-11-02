
@interface HKMedicationScheduleQueryConfiguration : HKQueryServerConfiguration {
    unsigned long long  _limit;
    NSArray * _sortDescriptors;
}

@property (nonatomic) unsigned long long limit;
@property (nonatomic, copy) NSArray *sortDescriptors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)limit;
- (void)setLimit:(unsigned long long)arg1;
- (void)setSortDescriptors:(id)arg1;
- (id)sortDescriptors;

@end
