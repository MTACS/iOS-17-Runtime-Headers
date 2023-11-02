
@interface ApplePMPPerfStateControl : NSObject {
    unsigned int  _connection;
    unsigned int  _currentPMPVersion;
    struct { 
        NSString *name; 
        unsigned long long stateValues[4]; 
        unsigned long long currentMinState; 
        unsigned long long currentMaxState; 
    }  _domainInfos;
    bool  _isSupported;
    unsigned long long  _nDomains;
    unsigned int  _powerState;
}

- (void).cxx_destruct;
- (void)_copySelectorsForService;
- (bool)_disableConsistentPerfState;
- (bool)_enableConsistentPerfState:(unsigned int)arg1;
- (bool)_open:(unsigned int)arg1;
- (bool)setupConnectionForPowerState:(unsigned int)arg1;
- (void)tearDown;

@end
