
@protocol IMSingletonOverriding <NSObject>

@optional

- (void)didOverrideSingleton:(id)arg1;
- (bool)shouldInvokeSelector:(SEL)arg1 onSingleton:(id)arg2;

@end
