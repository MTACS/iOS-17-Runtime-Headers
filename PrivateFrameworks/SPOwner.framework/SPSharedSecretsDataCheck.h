
@interface SPSharedSecretsDataCheck : NSObject <NSCopying, NSSecureCoding> {
    SPDataIntegrityCheck * _completeness;
    NSArray * _secrets;
}

@property (nonatomic, copy) SPDataIntegrityCheck *completeness;
@property (nonatomic, copy) NSArray *secrets;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)completeness;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCompleteness:(id)arg1 secrets:(id)arg2;
- (id)secrets;
- (void)setCompleteness:(id)arg1;
- (void)setSecrets:(id)arg1;

@end
