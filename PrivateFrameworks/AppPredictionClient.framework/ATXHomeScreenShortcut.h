
@interface ATXHomeScreenShortcut : NSObject <ATXHomeScreenLeafIconRepresentable> {
    NSString * _bundleIdentifierForDisplay;
    struct CGImage { } * _icon;
    NSString * _identifier;
    bool  _isAppLaunchWorkflow;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifierForDisplay;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGImage { }*icon;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isAppLaunchWorkflow;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifierForDisplay;
- (void)dealloc;
- (id)dictionaryRepresentationForIntrospection;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (struct CGImage { }*)icon;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 bundleIdentifierForDisplay:(id)arg3;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 bundleIdentifierForDisplay:(id)arg3 isAppLaunchWorkflow:(bool)arg4;
- (bool)isAppLaunchWorkflow;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXHomeScreenShortcut:(id)arg1;
- (id)name;
- (void)setIcon:(struct CGImage { }*)arg1;

@end
