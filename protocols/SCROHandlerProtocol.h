
@protocol SCROHandlerProtocol

@required

- (int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(bool)arg3;
- (int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(bool)arg4;
- (int)handlePerformActionForKey:(int)arg1 trusted:(bool)arg2;
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(bool)arg2;
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(bool)arg3;

@end
