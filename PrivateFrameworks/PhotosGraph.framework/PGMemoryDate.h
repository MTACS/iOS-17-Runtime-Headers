
@interface PGMemoryDate : NSObject {
    long long  _day;
    long long  _era;
    long long  _month;
    long long  _year;
}

- (id)initWithLocalDate:(id)arg1;
- (id)universalDateInTimeZone:(id)arg1;

@end
