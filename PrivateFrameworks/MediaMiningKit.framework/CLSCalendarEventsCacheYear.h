
@interface CLSCalendarEventsCacheYear : NSObject {
    NSMutableSet * _months;
    long long  _year;
}

@property (nonatomic, readonly) NSMutableSet *months;
@property (nonatomic) long long year;

- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)initWithYear:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)months;
- (void)setYear:(long long)arg1;
- (long long)year;

@end
