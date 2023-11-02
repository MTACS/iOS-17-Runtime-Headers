
@interface _PMLowPowerMode : NSObject <_PMLowPowerModeProtocol> {
    NSXPCConnection * _connection;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)getPowerMode;
- (id)init;
- (bool)setPowerMode:(long long)arg1 fromSource:(id)arg2;
- (void)setPowerMode:(long long)arg1 fromSource:(id)arg2 withCompletion:(id /* block */)arg3;
- (bool)setPowerMode:(long long)arg1 fromSource:(id)arg2 withParams:(id)arg3;
- (void)setPowerMode:(long long)arg1 fromSource:(id)arg2 withParams:(id)arg3 withCompletion:(id /* block */)arg4;

@end
