
@interface SBExtendedDisplayProfileFactory : NSObject <EXBDisplayProfileDelegate> {
    SBExternalDisplayDefaults * _defaults;
    <SBExtendedDisplayProfileFactoryDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)displayProfile:(id)arg1 initialDisplayConfigurationRequestForDisplay:(id)arg2;
- (void)displayProfile:(id)arg1 modifyInitialSceneParameters:(id)arg2;
- (id)displayProfile:(id)arg1 rootSceneWindowForDisplayConfiguration:(id)arg2;
- (bool)displayProfile:(id)arg1 shouldConnectToDisplay:(id)arg2;

@end
