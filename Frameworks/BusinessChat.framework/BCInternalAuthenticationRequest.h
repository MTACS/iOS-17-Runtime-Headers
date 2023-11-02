
@interface BCInternalAuthenticationRequest : NSObject <BCDictionarySerializable, NSSecureCoding> {
    NSString * _businessIdentifier;
    NSString * _groupIdentifier;
    NSDictionary * _labels;
    NSString * _responseEncryptionKey;
    NSArray * _retrieve;
}

@property (nonatomic, readonly) NSString *businessIdentifier;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) NSDictionary *labels;
@property (nonatomic, readonly) NSString *responseEncryptionKey;
@property (nonatomic, readonly) NSArray *retrieve;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)businessIdentifier;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)labels;
- (id)responseEncryptionKey;
- (id)retrieve;

@end
