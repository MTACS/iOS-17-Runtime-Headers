
@interface HKMHValenceDistributionSummaryQueryConfiguration : HKQueryServerConfiguration {
    bool  _ascending;
    struct { 
        long long start; 
        long long duration; 
    }  _dayIndexRange;
    NSCalendar * _gregorianCalendar;
    long long  _limit;
    unsigned long long  _options;
}

@property (nonatomic) bool ascending;
@property (nonatomic) struct { long long x1; long long x2; } dayIndexRange;
@property (nonatomic, retain) NSCalendar *gregorianCalendar;
@property (nonatomic) long long limit;
@property (nonatomic) unsigned long long options;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)ascending;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; long long x2; })dayIndexRange;
- (void)encodeWithCoder:(id)arg1;
- (id)gregorianCalendar;
- (id)initWithCoder:(id)arg1;
- (long long)limit;
- (unsigned long long)options;
- (void)setAscending:(bool)arg1;
- (void)setDayIndexRange:(struct { long long x1; long long x2; })arg1;
- (void)setGregorianCalendar:(id)arg1;
- (void)setLimit:(long long)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
