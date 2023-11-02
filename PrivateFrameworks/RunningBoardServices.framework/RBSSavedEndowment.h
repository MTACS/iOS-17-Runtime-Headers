
@interface RBSSavedEndowment : NSObject <NSCopying, RBSXPCSecureCoding> {
    NSObject<NSSecureCoding> * _endowment;
    NSString * _key;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<NSSecureCoding> *endowment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *key;
@property (readonly) Class superclass;

+ (id)savedEndowment:(id)arg1 withKey:(id)arg2;
+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_initWithEndowment:(id)arg1 andKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)endowment;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)key;

@end
