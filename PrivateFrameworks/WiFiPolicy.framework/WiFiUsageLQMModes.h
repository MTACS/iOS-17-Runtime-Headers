
@interface WiFiUsageLQMModes : NSObject {
    NSNumber * _occurrences;
    NSObject * _value;
}

@property (nonatomic, retain) NSNumber *occurrences;
@property (nonatomic, retain) NSObject *value;

- (void).cxx_destruct;
- (id)description;
- (id)initWithValue:(id)arg1 andOccurrences:(id)arg2;
- (id)occurrences;
- (void)setOccurrences:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
