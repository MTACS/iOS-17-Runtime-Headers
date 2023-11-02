
@interface DNDMutableAppAction : DNDAppAction

@property (nonatomic, copy) LNAction *action;
@property (getter=isEnabled, nonatomic) bool enabled;

- (void)setAction:(id)arg1;
- (void)setEnabled:(bool)arg1;

@end
