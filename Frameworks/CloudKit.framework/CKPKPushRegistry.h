
@interface CKPKPushRegistry : NSObject <PKPushRegistryDelegate> {
    NSHashTable * _delegates;
    PKPushRegistry * _pushRegistry;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPushRegistry *pushRegistry;
@property (readonly) Class superclass;

+ (id)sharedPushRegistry;

- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (id)delegates;
- (id)initInternal;
- (id)pushRegistry;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;
- (void)removeDelegate:(id)arg1;

@end
