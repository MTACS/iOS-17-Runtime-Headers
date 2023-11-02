
@interface BCAppleBacklightBrtControl : BCBrtControl {
    unsigned int  _backlightService;
    bool  _energySaving;
    bool  _isDCP;
    bool  _isDFR;
    double  _maxMilliAmps;
    double  _maxNitsEDR;
    double  _maxUser;
    double  _minMilliAmps;
    double  _minUser;
    bool  _override;
    struct { id /* block */ x1; } * _terminationCallback;
    unsigned int  _terminationIterator;
    struct IONotificationPort { } * _terminationNotifPort;
    unsigned long long  _thermalMitigation;
}

@property (readonly) unsigned long long registryID;

+ (id)copyAvailableControls;
+ (id)newMonitorWithHandler:(id /* block */)arg1 error:(id*)arg2;

- (id)ID;
- (id)copyModuleIdentifier;
- (id)copyProperty:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (double)getNitsWithError:(id*)arg1;
- (id)init;
- (id)initWithService:(unsigned int)arg1;
- (bool)parseAuroraCapabilities;
- (unsigned long long)registryID;
- (void)setDisplayService:(unsigned int)arg1;
- (bool)setNits:(double)arg1 error:(id*)arg2;
- (bool)setProperty:(id)arg1 value:(id)arg2 error:(id*)arg3;

@end
