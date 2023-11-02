
@interface IPAppState : IPInstallableState {
    LSApplicationIdentity * _launchServicesIdentity;
}

@property (readonly) LSApplicationIdentity *launchServicesIdentity;
@property (readonly) IPAppStateSource *source;

- (void).cxx_destruct;
- (id)initWithAppStateSource:(id)arg1 applicationIdentity:(id)arg2 isInstalling:(bool)arg3;
- (id)launchServicesIdentity;

@end
