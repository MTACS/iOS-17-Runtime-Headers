
@interface PSGTextualResponseSuggestion : NSObject <NSCopying, NSSecureCoding> {
    NSString * _responseCategory;
    NSString * _responseText;
}

@property (nonatomic, readonly) NSString *responseCategory;
@property (nonatomic, readonly) NSString *responseText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 category:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTextualSuggestion:(id)arg1;
- (id)responseCategory;
- (id)responseText;

@end
