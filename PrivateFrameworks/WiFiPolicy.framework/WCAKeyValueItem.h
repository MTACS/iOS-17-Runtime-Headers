
@interface WCAKeyValueItem : NSObject <NSSecureCoding> {
    NSString * _key;
    id  _value;
}

@property (nonatomic, readonly) NSArray *arrayValue;
@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly) NSData *bytesValue;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) float floatValue;
@property (nonatomic, readonly) int int32Value;
@property (nonatomic, readonly) long long int64Value;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) unsigned int uint32Value;
@property (nonatomic, readonly) unsigned long long uint64Value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arrayValue;
- (bool)boolValue;
- (id)bytesValue;
- (id)description;
- (id)dictionaryValue;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (float)floatValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 error:(id)arg2;
- (id)initWithKey:(id)arg1 value:(id)arg2;
- (int)int32Value;
- (long long)int64Value;
- (id)key;
- (id)stringValue;
- (unsigned int)uint32Value;
- (unsigned long long)uint64Value;

@end
