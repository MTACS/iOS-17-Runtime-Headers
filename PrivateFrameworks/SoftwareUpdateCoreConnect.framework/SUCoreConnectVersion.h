
@interface SUCoreConnectVersion : NSObject <NSSecureCoding> {
    NSString * _selectorString;
}

@property (nonatomic, readonly, retain) NSString *selectorString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSelector:(SEL)arg1;
- (id)initWithString:(id)arg1;
- (id)selectorString;

@end
