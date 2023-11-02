
@interface BMProcessCrash : BMEventBase <BMStoreData> {
    NSString * _appVersion;
    NSString * _bundleID;
    NSString * _bundleVersion;
    NSString * _coalitionName;
    BMProcessCrashException * _exception;
    bool  _hasIsBeta;
    bool  _hasIsFirstParty;
    NSString * _incidentID;
    bool  _isBeta;
    bool  _isFirstParty;
    NSString * _processName;
    NSString * _responsibleApp;
    BMProcessCrashTerminationReason * _terminationReason;
}

@property (nonatomic, readonly) NSString *appVersion;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSString *coalitionName;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMProcessCrashException *exception;
@property (nonatomic) bool hasIsBeta;
@property (nonatomic) bool hasIsFirstParty;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *incidentID;
@property (nonatomic, readonly) bool isBeta;
@property (nonatomic, readonly) bool isFirstParty;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) NSString *responsibleApp;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BMProcessCrashTerminationReason *terminationReason;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)appVersion;
- (id)bundleID;
- (id)bundleVersion;
- (id)coalitionName;
- (unsigned int)dataVersion;
- (id)description;
- (id)exception;
- (bool)hasIsBeta;
- (bool)hasIsFirstParty;
- (id)incidentID;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIncidentID:(id)arg1 processName:(id)arg2 bundleID:(id)arg3 appVersion:(id)arg4 bundleVersion:(id)arg5 exception:(id)arg6 terminationReason:(id)arg7 responsibleApp:(id)arg8;
- (id)initWithIncidentID:(id)arg1 processName:(id)arg2 bundleID:(id)arg3 appVersion:(id)arg4 bundleVersion:(id)arg5 exception:(id)arg6 terminationReason:(id)arg7 responsibleApp:(id)arg8 coalitionName:(id)arg9;
- (id)initWithIncidentID:(id)arg1 processName:(id)arg2 bundleID:(id)arg3 appVersion:(id)arg4 bundleVersion:(id)arg5 exception:(id)arg6 terminationReason:(id)arg7 responsibleApp:(id)arg8 coalitionName:(id)arg9 isFirstParty:(id)arg10 isBeta:(id)arg11;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isBeta;
- (bool)isEqual:(id)arg1;
- (bool)isFirstParty;
- (id)jsonDictionary;
- (id)processName;
- (id)responsibleApp;
- (id)serialize;
- (void)setHasIsBeta:(bool)arg1;
- (void)setHasIsFirstParty:(bool)arg1;
- (id)terminationReason;
- (void)writeTo:(id)arg1;

@end
