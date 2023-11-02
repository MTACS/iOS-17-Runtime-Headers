
@interface AVStringPair : NSObject {
    NSString * _first;
    NSString * _second;
}

@property (nonatomic, readonly) NSString *first;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *second;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (id)first;
- (id)initWithString:(id)arg1 separatedByString:(id)arg2;
- (id)key;
- (bool)keyEquals:(id)arg1;
- (id)second;
- (id)value;

@end
