
@interface DNDMutableSystemAction : DNDSystemAction

@property (nonatomic, retain) WFToggleSettingContextualAction *action;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) WFReverseContextualAction *reverseAction;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAction:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setReverseAction:(id)arg1;

@end
