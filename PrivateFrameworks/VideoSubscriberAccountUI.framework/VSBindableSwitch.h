
@interface VSBindableSwitch : UISwitch

- (void)_updateBindingForValueChanged:(id)arg1;
- (void)vs_bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)vs_unbind:(id)arg1;

@end
