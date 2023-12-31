
@interface PETStringPairs : NSObject {
    NSArray * _keys;
    NSArray * _values;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) NSArray *keys;
@property (nonatomic, readonly) NSArray *values;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithKeys:(id)arg1 values:(id)arg2;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)keys;
- (id)subsetForKeys:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)values;

@end
