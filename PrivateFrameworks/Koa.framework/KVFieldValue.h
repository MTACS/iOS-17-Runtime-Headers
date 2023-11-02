
@interface KVFieldValue : NSObject {
    long long  _fieldType;
    NSString * _value;
}

@property (nonatomic, readonly) long long fieldType;
@property (nonatomic, readonly) NSString *value;

- (void).cxx_destruct;
- (long long)fieldType;
- (id)initWithFieldType:(long long)arg1 value:(id)arg2;
- (id)value;

@end
