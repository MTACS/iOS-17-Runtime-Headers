
@interface FKASiriShortcutKeyboardCommand : AXSSKeyboardCommand {
    AXSiriShortcut * _shortcut;
    NSString * _siriShortcutIdentifier;
}

@property (nonatomic, retain) AXSiriShortcut *shortcut;
@property (nonatomic, readonly) NSString *siriShortcutIdentifier;

+ (id)commandWithSiriShortcutIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSiriShortcutIdentifier:(id)arg1;
- (bool)isEqualToCommand:(id)arg1;
- (id)localizedName;
- (void)perform;
- (void)setShortcut:(id)arg1;
- (id)shortcut;
- (id)siriShortcutIdentifier;

@end
