
@interface EXBNullDisplayController : NSObject <EXBDisplayControlling> {
    NSMutableDictionary * _connectedDisplays;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectToDisplayIdentity:(id)arg1 configuration:(id)arg2 displayTransformUpdater:(id)arg3 caDisplayQueue:(id)arg4 assertion:(id)arg5;
- (void)displayAssertion:(id)arg1 didLoseControlOfDisplayForDeactivationReasons:(unsigned long long)arg2;
- (void)displayAssertionDidGainControlOfDisplay:(id)arg1 previousDeactivationReasons:(unsigned long long)arg2;
- (id)displayConfigurationForIdentity:(id)arg1;
- (void)displayIdentityDidDisconnect:(id)arg1;
- (void)displayIdentityDidUpdate:(id)arg1 configuration:(id)arg2;
- (id)init;
- (bool)isConnectedToDisplay:(id)arg1;
- (void)transformDisplayConfigurationWithBuilder:(id)arg1;

@end
