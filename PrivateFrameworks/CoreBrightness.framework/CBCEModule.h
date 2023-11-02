
@interface CBCEModule : CBModule <CBContainerModuleProtocol> {
    NSMutableDictionary * _alsEvents;
    id  _currentInput;
    NSMutableDictionary * _currentInputDict;
    NSMutableDictionary * _currentOutputDict;
    id  _model;
    Class  _modelClass;
    Class  _modelInputClass;
    id  _overriddenInput;
    bool  _overriding;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property Class modelClass;
@property Class modelInputClass;
@property (readonly) Class superclass;

- (id)copyInference:(id)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)dealloc;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)initWithQueue:(id)arg1 ceModelID:(unsigned int)arg2;
- (Class)modelClass;
- (Class)modelInputClass;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (void)setModelClass:(Class)arg1;
- (void)setModelInputClass:(Class)arg1;
- (id)setModelInputWithAlsEvent:(id)arg1 ceInput:(id)arg2;
- (id)setModelInputWithXtalkArr:(id)arg1 alsArr:(id)arg2 alsRatioArr:(id)arg3 X:(double)arg4 Y:(double)arg5 Z:(double)arg6 CCT:(double)arg7 u:(double)arg8 v:(double)arg9 lux:(double)arg10 nits:(double)arg11 iTime:(double)arg12 gain:(double)arg13 x:(double)arg14 y:(double)arg15 a:(double)arg16 b:(double)arg17 ceInput:(id)arg18;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)start;
- (void)stop;

@end
