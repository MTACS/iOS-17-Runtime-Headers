
@interface WFFocusConfigurationUIState : NSObject <NSCopying, NSSecureCoding> {
    LNAction * _action;
    WFContextualAction * _contextualAction;
    LNDisplayRepresentation * _displayRepresentation;
    bool  _enabled;
    bool  _isUIValid;
}

@property (nonatomic, readonly, copy) LNAction *action;
@property (nonatomic, readonly, copy) WFContextualAction *contextualAction;
@property (nonatomic, readonly, copy) LNDisplayRepresentation *displayRepresentation;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) bool isUIValid;
@property (nonatomic, readonly) bool isValid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)contextualAction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabled:(bool)arg1 uiValidity:(bool)arg2 action:(id)arg3 displayRepresentation:(id)arg4;
- (id)initWithEnabled:(bool)arg1 uiValidity:(bool)arg2 contextualAction:(id)arg3;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isUIValid;
- (bool)isValid;

@end
