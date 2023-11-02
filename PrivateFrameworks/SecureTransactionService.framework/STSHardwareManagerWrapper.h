
@interface STSHardwareManagerWrapper : NSObject <NFHardwareEventListener> {
    bool  _resolvedHwManagerState;
    NSObject<OS_dispatch_semaphore> * _sem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool resolvedHwManagerState;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *sem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)hardwareStateDidChange;
- (id)manager;
- (bool)resolvedHwManagerState;
- (id)sem;
- (void)setResolvedHwManagerState:(bool)arg1;
- (void)setSem:(id)arg1;

@end
