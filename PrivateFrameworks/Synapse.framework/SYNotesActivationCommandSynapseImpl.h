
@interface SYNotesActivationCommandSynapseImpl : NSObject <SYNotesActivationCommandImpl>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_activateWithActivity:(id)arg1 completion:(id /* block */)arg2;
+ (void)activateWithDomainIdentifier:(id)arg1 noteIdentifier:(id)arg2 completion:(id /* block */)arg3;
+ (void)activateWithMetaActivity:(id)arg1 completion:(id /* block */)arg2;

@end
