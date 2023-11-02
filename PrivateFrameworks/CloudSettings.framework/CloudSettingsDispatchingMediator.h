
@interface CloudSettingsDispatchingMediator : NSObject <CloudSettingsMediator> {
    bool  _dispatchSettersOnMain;
    NSMutableDictionary * _keysMap;
}

@property bool dispatchSettersOnMain;
@property (retain) NSMutableDictionary *keysMap;

- (void).cxx_destruct;
- (void)applySettings:(id)arg1;
- (id)deviceSettingsForKeys:(id)arg1;
- (bool)dispatchSettersOnMain;
- (id)init;
- (id)keysMap;
- (id)mergeSettings:(id)arg1;
- (void)registerKey:(id)arg1 getter:(SEL)arg2 setter:(SEL)arg3;
- (void)registerKey:(id)arg1 getter:(SEL)arg2 setter:(SEL)arg3 merger:(SEL)arg4 type:(id)arg5;
- (void)registerKeys;
- (void)setDispatchSettersOnMain:(bool)arg1;
- (void)setKeysMap:(id)arg1;

@end
