
@interface HKMCDaySummaryQueryConfiguration : HKQueryServerConfiguration {
    bool  _ascending;
    struct { 
        long long start; 
        long long duration; 
    }  _dayIndexRange;
    long long  _limit;
}

@property (nonatomic) bool ascending;
@property (nonatomic) struct { long long x1; long long x2; } dayIndexRange;
@property (nonatomic) long long limit;

+ (bool)supportsSecureCoding;

- (bool)ascending;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; long long x2; })dayIndexRange;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)limit;
- (void)setAscending:(bool)arg1;
- (void)setDayIndexRange:(struct { long long x1; long long x2; })arg1;
- (void)setLimit:(long long)arg1;

@end
