
@interface RBSEndowmentTree : NSObject <NSCopying, RBSXPCSecureCoding> {
    NSString * _endowmentNamespace;
    NSMutableDictionary * _tree;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *endowmentNamespace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)endowmentTreeForLinks:(id)arg1;
+ (id)endowmentTreeForNamespace:(id)arg1;
+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)childrenLinks:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)endowmentNamespace;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)rootLinks;

@end
