
@interface ISO18013RequestElement : NSObject <NSSecureCoding> {
    NSString * _identifier;
    unsigned short  _retentionIntent;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
