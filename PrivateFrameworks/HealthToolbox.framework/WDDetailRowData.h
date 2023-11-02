
@interface WDDetailRowData : NSObject {
    NSString * _key;
    NSString * _value;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (id)key;
- (id)value;

@end
