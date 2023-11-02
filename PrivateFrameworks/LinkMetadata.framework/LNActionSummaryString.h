
@interface LNActionSummaryString : NSObject <NSCopying, NSSecureCoding> {
    NSString * _formatString;
    NSArray * _parameterIdentifiers;
}

@property (nonatomic, readonly, copy) NSString *formatString;
@property (nonatomic, readonly) NSArray *parameterIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formatString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormatString:(id)arg1 parameterIdentifiers:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parameterIdentifiers;

@end
