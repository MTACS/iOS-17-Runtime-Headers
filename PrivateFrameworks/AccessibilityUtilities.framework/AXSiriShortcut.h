
@interface AXSiriShortcut : NSObject <NSSecureCoding> {
    NSString * _associatedAppBundleIdentifier;
    unsigned short  _glyphCharacter;
    NSString * _identifier;
    NSString * _shortcutName;
}

@property (nonatomic, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic) unsigned short glyphCharacter;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *phrase;
@property (nonatomic, copy) NSString *shortcutName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedAppBundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)glyphCharacter;
- (id)identifier;
- (id)initWithAccessibilityWorkflow:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)phrase;
- (void)setAssociatedAppBundleIdentifier:(id)arg1;
- (void)setGlyphCharacter:(unsigned short)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setShortcutName:(id)arg1;
- (id)shortcutName;

@end
