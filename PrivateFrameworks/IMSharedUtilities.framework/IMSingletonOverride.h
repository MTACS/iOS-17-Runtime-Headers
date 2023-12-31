
@interface IMSingletonOverride : NSObject <IMSingletonOverriding> {
    id  _overriddenSingleton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property id overriddenSingleton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didOverrideSingleton:(id)arg1;
- (id)overriddenSingleton;
- (void)setOverriddenSingleton:(id)arg1;
- (bool)shouldInvokeSelector:(SEL)arg1 onSingleton:(id)arg2;

@end
