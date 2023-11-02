
@interface BMTextInputSession : BMEventBase <BMStoreData> {
    NSString * _bundleID;
    double  _duration;
    bool  _hasDuration;
    bool  _hasRaw_timestamp;
    double  _raw_timestamp;
    NSString * _sessionID;
    int  _sessionInput;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic) bool hasDuration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly) int sessionInput;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timestamp;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)bundleID;
- (unsigned int)dataVersion;
- (id)description;
- (double)duration;
- (bool)hasDuration;
- (id)initByReadFrom:(id)arg1;
- (id)initWithDuration:(id)arg1 timestamp:(id)arg2 bundleID:(id)arg3 sessionInput:(int)arg4;
- (id)initWithDuration:(id)arg1 timestamp:(id)arg2 bundleID:(id)arg3 sessionInput:(int)arg4 sessionID:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)sessionID;
- (int)sessionInput;
- (void)setHasDuration:(bool)arg1;
- (id)timestamp;
- (void)writeTo:(id)arg1;

@end
