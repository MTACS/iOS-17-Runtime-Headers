
@interface ABPKCircularArray : NSObject {
    NSMutableArray * _array;
    long long  _capacity;
}

@property (readonly) NSArray *contents;

- (void).cxx_destruct;
- (void)add:(id)arg1;
- (id)contents;
- (long long)count;
- (id)initWithCapacity:(long long)arg1;

@end
