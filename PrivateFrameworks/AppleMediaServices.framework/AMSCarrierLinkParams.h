
@interface AMSCarrierLinkParams : NSObject <NSSecureCoding> {
    NSDictionary * _dictionary;
    NSString * _linkParamsString;
}

@property (nonatomic, readonly) NSString *adamId;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *linkParamsString;

+ (id)_queryDictionaryFromString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adamId;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)linkParamsString;

@end
