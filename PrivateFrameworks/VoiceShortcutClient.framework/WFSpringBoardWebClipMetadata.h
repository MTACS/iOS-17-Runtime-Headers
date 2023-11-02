
@interface WFSpringBoardWebClipMetadata : NSObject <NSSecureCoding> {
    bool  _appIsInstalled;
    NSString * _applicationIdentifier;
    NSString * _shortcutIdentifier;
}

@property (nonatomic, readonly) bool appIsInstalled;
@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly, copy) NSString *shortcutIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)appIsInstalled;
- (id)applicationIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShortcutIdentifier:(id)arg1 applicationIdentifier:(id)arg2 appIsInstalled:(bool)arg3;
- (id)shortcutIdentifier;

@end
