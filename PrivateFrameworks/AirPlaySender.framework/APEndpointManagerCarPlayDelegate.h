
@interface APEndpointManagerCarPlayDelegate : NSObject <APCarPlayPolicyMonitorDelegate, APCarPlayPreferencesDelegate> {
    struct OpaqueFigCFWeakReferenceHolder { } * _weakManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithEndpointManager:(struct OpaqueFigEndpointManager { }*)arg1;
- (void)setCarPlayEnabled:(bool)arg1;
- (void)setEndpoint:(struct OpaqueFigEndpoint { }*)arg1 isAllowed:(bool)arg2;

@end
