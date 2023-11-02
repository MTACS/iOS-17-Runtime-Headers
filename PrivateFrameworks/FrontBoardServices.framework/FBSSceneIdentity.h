
@interface FBSSceneIdentity : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _internalWorkspaceIdentifier;
    NSString * _workspaceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *internalWorkspaceIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *workspaceIdentifier;

+ (id)identityForIdentifier:(id)arg1;
+ (id)identityForIdentifier:(id)arg1 workspaceIdentifier:(id)arg2;
+ (id)identityForIdentifier:(id)arg1 workspaceIdentifier:(id)arg2 internalWorkspaceIdentifier:(id)arg3;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)internalWorkspaceIdentifier;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)workspaceIdentifier;

@end
