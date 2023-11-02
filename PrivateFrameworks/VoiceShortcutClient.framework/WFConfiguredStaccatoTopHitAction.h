
@interface WFConfiguredStaccatoTopHitAction : WFConfiguredStaccatoAction {
    WFExecutableAppShortcutIdentifier * _appShortcutIdentifier;
    WFContextualAction * _contextualAction;
}

@property (nonatomic, readonly) WFExecutableAppShortcutIdentifier *appShortcutIdentifier;
@property (nonatomic, readonly) WFContextualAction *contextualAction;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appShortcutIdentifier;
- (id)contextualAction;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextualAction:(id)arg1 appShortcutIdentifier:(id)arg2 shortcutsMetadata:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)previewIcon;

@end
