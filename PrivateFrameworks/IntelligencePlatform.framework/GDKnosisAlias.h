
@interface GDKnosisAlias : NSObject <NSSecureCoding> {
    NSString * _primary;
}

@property (nonatomic, readonly, copy) NSString *primary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimary:(id)arg1;
- (id)primary;

@end
