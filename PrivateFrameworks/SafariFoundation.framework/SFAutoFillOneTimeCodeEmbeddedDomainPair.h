
@interface SFAutoFillOneTimeCodeEmbeddedDomainPair : NSObject <NSSecureCoding> {
    NSString * _domain;
    bool  _strict;
}

@property (nonatomic, copy) NSString *domain;
@property (nonatomic) bool strict;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setStrict:(bool)arg1;
- (bool)strict;

@end
