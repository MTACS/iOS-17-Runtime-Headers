
@interface WFSiriLinkRequest : WFSiriActionRequest {
    LNAction * _action;
    NSString * _bundleIdentifier;
    NSString * _nameOverride;
    bool  _showWhenRun;
}

@property (nonatomic, readonly) LNAction *action;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *nameOverride;
@property (nonatomic, readonly) bool showWhenRun;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAction:(id)arg1 bundleIdentifier:(id)arg2 nameOverride:(id)arg3 showWhenRun:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (id)nameOverride;
- (bool)showWhenRun;

@end
