
@interface WFLinkEnumerationCase : NSObject <NSSecureCoding> {
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
