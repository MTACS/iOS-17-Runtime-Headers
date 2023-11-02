
@interface WFRemoteExecutionKeyValuePair : NSObject {
    NSString * _key;
    id  _value;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (id)key;
- (id)value;

@end
