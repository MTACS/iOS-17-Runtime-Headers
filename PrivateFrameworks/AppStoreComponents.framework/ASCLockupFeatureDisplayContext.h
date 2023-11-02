
@interface ASCLockupFeatureDisplayContext : NSObject <ASCLockupFeature> {
    ASCLockupDisplayContext * _displayContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) ASCLockupDisplayContext *displayContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayContext;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayContext:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
