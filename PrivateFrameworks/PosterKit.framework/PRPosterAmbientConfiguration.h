
@interface PRPosterAmbientConfiguration : NSObject <BSXPCSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding, PRPosterRoleAttribute> {
    long long  _creationBehavior;
    long long  _deletionBehavior;
    NSString * _displayNameSystemSymbolName;
    long long  _editingBehavior;
    <PRPosterContentStyle> * _editingContentStyle;
    NSString * _editingSystemSymbolName;
    bool  _hidden;
    bool  _needsAuthentication;
    long long  _supportedDataLayout;
}

@property (nonatomic, readonly) NSString *attributeType;
@property (nonatomic) long long creationBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long deletionBehavior;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayNameSystemSymbolName;
@property (nonatomic) long long editingBehavior;
@property (nonatomic, retain) <PRPosterContentStyle> *editingContentStyle;
@property (nonatomic, copy) NSString *editingSystemSymbolName;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidden;
@property (nonatomic) bool needsAuthentication;
@property (readonly) Class superclass;
@property (nonatomic) long long supportedDataLayout;

+ (id)allowedEditingContentStyleClasses;
+ (id)decodeObjectWithJSON:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)creationBehavior;
- (long long)deletionBehavior;
- (id)description;
- (id)displayNameSystemSymbolName;
- (long long)editingBehavior;
- (id)editingContentStyle;
- (id)editingSystemSymbolName;
- (id)encodeJSON;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)hidden;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupportedDataLayout:(long long)arg1;
- (id)initWithSupportedDataLayout:(long long)arg1 creationBehavior:(long long)arg2 editingBehavior:(long long)arg3 deletionBehavior:(long long)arg4;
- (id)initWithSupportedDataLayout:(long long)arg1 creationBehavior:(long long)arg2 editingBehavior:(long long)arg3 deletionBehavior:(long long)arg4 isHidden:(bool)arg5 needsAuthentication:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAmbientConfiguration:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)needsAuthentication;
- (void)setCreationBehavior:(long long)arg1;
- (void)setDeletionBehavior:(long long)arg1;
- (void)setDisplayNameSystemSymbolName:(id)arg1;
- (void)setEditingBehavior:(long long)arg1;
- (void)setEditingContentStyle:(id)arg1;
- (void)setEditingSystemSymbolName:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setNeedsAuthentication:(bool)arg1;
- (void)setSupportedDataLayout:(long long)arg1;
- (long long)supportedDataLayout;

@end
