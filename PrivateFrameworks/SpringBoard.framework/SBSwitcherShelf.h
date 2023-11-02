
@interface SBSwitcherShelf : NSObject <BSDescriptionProviding, NSCopying, SBSwitcherLayoutElementProviding> {
    NSString * _bundleIdentifier;
    unsigned long long  _displayMode;
    long long  _layoutRole;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long displayMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long layoutRole;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)displayMode;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 layoutRole:(long long)arg2 displayMode:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)layoutRole;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (unsigned long long)switcherLayoutElementType;
- (id)uniqueIdentifier;

@end
