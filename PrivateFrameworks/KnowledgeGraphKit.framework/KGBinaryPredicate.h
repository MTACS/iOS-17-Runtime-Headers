
@interface KGBinaryPredicate : NSObject {
    unsigned long long  _comparator;
    id  _value;
}

@property (nonatomic, readonly) unsigned long long comparator;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (unsigned long long)comparator;
- (id)description;
- (id)initWithComparator:(unsigned long long)arg1 value:(id)arg2;
- (id)value;

@end
