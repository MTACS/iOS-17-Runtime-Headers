
@interface _HDSPBiomeBridge : NSObject <HDSPBiomeInterface> {
    BMBiomeScheduler * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMBiomeScheduler *scheduler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)scheduler;
- (void)sendEvent:(id)arg1 toStream:(id)arg2;
- (id)subscribe:(id)arg1 callback:(id /* block */)arg2;

@end
