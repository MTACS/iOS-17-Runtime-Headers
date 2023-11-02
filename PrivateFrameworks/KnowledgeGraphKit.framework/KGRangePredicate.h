
@interface KGRangePredicate : NSObject {
    unsigned long long  _comparator;
    id  _value1;
    id  _value2;
}

@property (nonatomic, readonly) unsigned long long comparator;
@property (nonatomic, readonly) id value1;
@property (nonatomic, readonly) id value2;

- (void).cxx_destruct;
- (unsigned long long)comparator;
- (id)description;
- (id)initWithComparator:(unsigned long long)arg1 value1:(id)arg2 value2:(id)arg3;
- (id)leftParen:(unsigned long long)arg1;
- (id)rightParen:(unsigned long long)arg1;
- (id)value1;
- (id)value2;

@end
