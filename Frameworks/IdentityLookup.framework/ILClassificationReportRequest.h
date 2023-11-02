
@interface ILClassificationReportRequest : NSObject <NSSecureCoding> {
    NSString * _extensionIdentifier;
    NSDictionary * _jsonDictionary;
}

@property (nonatomic, readonly, copy) NSString *extensionIdentifier;
@property (nonatomic, copy) NSDictionary *jsonDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionIdentifier:(id)arg1 jsonDictionary:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (id)jsonDictionary;
- (void)setJsonDictionary:(id)arg1;

@end
