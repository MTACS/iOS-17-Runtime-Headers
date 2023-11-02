
@interface AVKeyValueChange : NSObject {
    NSString * _keyPath;
    id  _observationToken;
    id  _oldValue;
    id  _value;
}

@property (nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) id observationToken;
@property (nonatomic, readonly) id oldValue;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)initWithValue:(id)arg1 oldValue:(id)arg2 keyPath:(id)arg3 observationToken:(id)arg4;
- (id)keyPath;
- (id)observationToken;
- (id)oldValue;
- (id)value;

@end
