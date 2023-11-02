
@interface RBSProcessAssertionInfo : NSObject <NSCopying, RBSXPCSecureCoding> {
    NSString * _domain;
    NSString * _explanation;
    NSString * _name;
    unsigned long long  _reason;
    unsigned char  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long reason;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned char type;

+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)domain;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)explanation;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (id)initWithType:(unsigned char)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLegacyAssertionReason:(unsigned long long)arg1;
- (id)name;
- (unsigned long long)reason;
- (void)setDomain:(id)arg1;
- (void)setExplanation:(id)arg1;
- (void)setName:(id)arg1;
- (void)setReason:(unsigned long long)arg1;
- (unsigned char)type;

@end
