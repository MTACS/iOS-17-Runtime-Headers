
@interface BCError : NSObject <BCDictionarySerializable, NSSecureCoding> {
    NSNumber * _code;
    NSString * _domain;
    NSString * _message;
}

@property (nonatomic, retain) NSNumber *code;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSString *message;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)code;
- (id)dictionaryValue;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCode:(id)arg1 domain:(id)arg2 message:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)message;
- (void)setCode:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setMessage:(id)arg1;

@end
