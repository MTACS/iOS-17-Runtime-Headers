
@interface TCTestSentence : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _grammarDetails;
    NSString * _originalString;
}

@property (readonly, copy) NSString *finalString;
@property (readonly, copy) NSArray *grammarDetails;
@property (readonly, copy) NSString *originalString;
@property (readonly, copy) NSString *testString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)finalString;
- (id)grammarDetails;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalString:(id)arg1 grammarDetails:(id)arg2;
- (id)initWithTestString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)originalString;
- (id)testString;

@end
