
@interface IPAppStateSource : IPInstallableStateSource {
    LSApplicationIdentity * _appIdentity;
}

- (void).cxx_destruct;
- (id)collationKey;
- (id)currentProgressForSource:(id)arg1 error:(id*)arg2;
- (id)currentStateWithError:(id*)arg1;
- (id)description;
- (id)initWithApplicationIdentity:(id)arg1;
- (id)initWithApplicationIdentity:(id)arg1 forStateSourceRegistry:(id)arg2;
- (unsigned long long)installableType;
- (id)launchServicesIdentity;
- (void)noteInstallStarted;
- (void)noteRemoved;
- (void)notifyOfUpdate:(id)arg1;
- (id)progressSourceWithError:(id*)arg1;

@end
