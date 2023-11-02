
@interface WPDManager : NSObject <CBCentralManagerDelegate, CBPeripheralManagerDelegate, CBScalablePipeManagerDelegate> {
    NSSet * _cbManagers;
    bool  _isHomePod;
    NSString * _name;
    bool  _restricted;
    WPDaemonServer * _server;
    long long  _state;
    bool  _testMode;
}

@property (nonatomic, readonly) NSIndexSet *advAllowlist;
@property (nonatomic, retain) NSSet *cbManagers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHomePod;
@property (nonatomic, readonly) bool isInternalBuild;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) bool restricted;
@property (nonatomic, readonly) NSIndexSet *scanAllowlist;
@property WPDaemonServer *server;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic) bool testMode;

+ (id)advAllowlist;
+ (id)cbStateAsString:(long long)arg1;
+ (void)initialize;
+ (void)initializeAdvDenylist:(id)arg1 AdvAllowlist:(id)arg2 ScanDenylist:(id)arg3 ScanAllowlist:(id)arg4;
+ (bool)isInternalBuild;
+ (id)scanAllowlist;
+ (id)wpStateAsString:(long long)arg1;

- (void).cxx_destruct;
- (id)advAllowlist;
- (void)cbManagerDidUpdateState:(id)arg1;
- (id)cbManagers;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)description;
- (void)generateStateDump;
- (id)generateStateDumpStrings;
- (id)initWithServer:(id)arg1 Name:(id)arg2;
- (bool)isAdvertisingAllowlistedForType:(unsigned char)arg1;
- (bool)isHomePod;
- (bool)isInternalBuild;
- (bool)isScanAllowlistedForType:(unsigned char)arg1;
- (id)name;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (bool)restricted;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (id)scanAllowlist;
- (id)server;
- (void)setCbManagers:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRestricted:(bool)arg1;
- (void)setServer:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTestMode:(bool)arg1;
- (long long)state;
- (bool)testMode;
- (void)update;
- (void)updateState:(long long)arg1 Restricted:(bool)arg2;

@end
