
@interface WFINShortcutContextualAction : WFContextualAction {
    INShortcut * _shortcut;
}

@property (nonatomic, readonly, copy) INShortcut *shortcut;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (id)initWithINShortcut:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)runDescriptorForSurface:(unsigned long long)arg1;
- (id)runRequestForSurface:(unsigned long long)arg1;
- (id)shortcut;
- (id)uniqueIdentifier;
- (id)workflowRunKind;

@end
