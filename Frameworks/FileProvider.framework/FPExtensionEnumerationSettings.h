
@interface FPExtensionEnumerationSettings : FPEnumerationSettings {
    bool  _createAppLibraries;
    FPItemID * _enumeratedItemID;
    bool  _presenterEnumeration;
    bool  _requireSandboxAccess;
    bool  _wantsDirectExtensionEnumeration;
}

@property (nonatomic) bool createAppLibraries;
@property (nonatomic, copy) FPItemID *enumeratedItemID;
@property (getter=isPresenterEnumeration, nonatomic) bool presenterEnumeration;
@property (nonatomic) bool requireSandboxAccess;
@property (nonatomic) bool wantsDirectExtensionEnumeration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createAppLibraries;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)enumeratedItemID;
- (id)initWithCoder:(id)arg1;
- (bool)isPresenterEnumeration;
- (bool)requireSandboxAccess;
- (void)setCreateAppLibraries:(bool)arg1;
- (void)setEnumeratedItemID:(id)arg1;
- (void)setPresenterEnumeration:(bool)arg1;
- (void)setRequireSandboxAccess:(bool)arg1;
- (void)setWantsDirectExtensionEnumeration:(bool)arg1;
- (bool)wantsDirectExtensionEnumeration;

@end
