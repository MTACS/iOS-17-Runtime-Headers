
@interface TKKeyPathObservation : NSObject {
    NSString * _keyPath;
    NSObject * _object;
}

@property (nonatomic, copy) NSString *keyPath;
@property (nonatomic) NSObject *object;

- (void).cxx_destruct;
- (id)keyPath;
- (id)object;
- (void)setKeyPath:(id)arg1;
- (void)setObject:(id)arg1;

@end
