
@interface RERelevanceEngineDiagnosticRegistration : RESingleton {
    bool  _supportsRegistration;
}

- (void)_accessEngineDataForProcess:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_allProcesses;
- (id)_defaultRegistrationDirectory;
- (id)_init;
- (id)_processesFileURL;
- (void)checkinEngine:(id)arg1;
- (void)enumerateAvailableEngines:(id /* block */)arg1;

@end
