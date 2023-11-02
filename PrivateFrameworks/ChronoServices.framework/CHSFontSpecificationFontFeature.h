
@interface CHSFontSpecificationFontFeature : NSObject <BSXPCSecureCoding, NSCopying> {
    long long  _selector;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long selector;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithType:(long long)arg1 selector:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)selector;
- (long long)type;

@end
