
@interface BMSiriUI : BMEventBase <BMStoreData> {
    NSString * _dismissalReason;
    bool  _hasRaw_absoluteTimestamp;
    bool  _hasStarting;
    double  _raw_absoluteTimestamp;
    NSString * _sessionID;
    bool  _starting;
    NSString * _uuid;
    NSString * _viewMode;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *dismissalReason;
@property (nonatomic) bool hasStarting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSString *viewMode;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (unsigned int)dataVersion;
- (id)description;
- (id)dismissalReason;
- (bool)hasStarting;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSessionID:(id)arg1 uuid:(id)arg2 viewMode:(id)arg3 dismissalReason:(id)arg4 starting:(id)arg5 absoluteTimestamp:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)sessionID;
- (void)setHasStarting:(bool)arg1;
- (bool)starting;
- (id)uuid;
- (id)viewMode;
- (void)writeTo:(id)arg1;

@end
