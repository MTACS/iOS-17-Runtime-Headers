
@interface CLSCalendarEventsCacheDay : NSObject {
    long long  _day;
    NSMutableSet * _events;
}

@property (nonatomic) long long day;
@property (nonatomic, readonly) NSMutableSet *events;

- (void).cxx_destruct;
- (long long)day;
- (id)debugDescription;
- (id)events;
- (unsigned long long)hash;
- (id)initWithDay:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDay:(long long)arg1;

@end
