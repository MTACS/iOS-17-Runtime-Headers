
@interface CRKKeyValuePair : NSObject {
    id  _key;
    id  _value;
}

@property (nonatomic, readonly) id key;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (id)key;
- (id)value;

@end
