
@interface ASCLockupFeatureSignpostTags : NSObject <ASCLockupFeature> {
    NSSet * _signpostTags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *signpostTags;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignpostTags:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)signpostTags;

@end
