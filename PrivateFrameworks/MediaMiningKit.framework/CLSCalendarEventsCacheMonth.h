
@interface CLSCalendarEventsCacheMonth : NSObject {
    NSMutableSet * _days;
    long long  _month;
}

@property (nonatomic, readonly) NSMutableSet *days;
@property (nonatomic) long long month;

- (void).cxx_destruct;
- (id)days;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)initWithMonth:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)month;
- (void)setMonth:(long long)arg1;

@end
