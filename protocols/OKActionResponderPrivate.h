
@protocol OKActionResponderPrivate <OKActionResponder>

@required

- (OKActionBinding *)actionBindingForAction:(OKAction *)arg1 isTouchCountAgnostic:(bool)arg2;
- (void)addActionBinding:(OKActionBinding *)arg1 scope:(unsigned long long)arg2;
- (NSSet *)allActionBindings;
- (void)removeActionBinding:(OKActionBinding *)arg1;
- (void)removeAllActionBindings;

@end
