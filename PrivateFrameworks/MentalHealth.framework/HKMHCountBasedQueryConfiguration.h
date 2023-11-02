
@interface HKMHCountBasedQueryConfiguration : HKQueryServerConfiguration {
    struct { 
        long long start; 
        long long duration; 
    }  _dayIndexRange;
    NSCalendar * _gregorianCalendar;
}

@property (nonatomic) struct { long long x1; long long x2; } dayIndexRange;
@property (nonatomic, retain) NSCalendar *gregorianCalendar;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; long long x2; })dayIndexRange;
- (void)encodeWithCoder:(id)arg1;
- (id)gregorianCalendar;
- (id)initWithCoder:(id)arg1;
- (void)setDayIndexRange:(struct { long long x1; long long x2; })arg1;
- (void)setGregorianCalendar:(id)arg1;

@end
