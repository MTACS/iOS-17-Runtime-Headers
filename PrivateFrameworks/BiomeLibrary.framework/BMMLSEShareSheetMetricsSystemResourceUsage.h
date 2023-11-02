
@interface BMMLSEShareSheetMetricsSystemResourceUsage : BMEventBase <BMStoreData> {
    double  _duration;
    bool  _hasDuration;
    bool  _hasTimeoutOccured;
    NSString * _identifier;
    NSString * _subidentifier;
    bool  _timeoutOccured;
    int  _userType;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasTimeoutOccured;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *subidentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool timeoutOccured;
@property (nonatomic, readonly) int userType;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (double)duration;
- (bool)hasDuration;
- (bool)hasTimeoutOccured;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithDuration:(id)arg1 userType:(int)arg2 timeoutOccured:(id)arg3 identifier:(id)arg4 subidentifier:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasDuration:(bool)arg1;
- (void)setHasTimeoutOccured:(bool)arg1;
- (id)subidentifier;
- (bool)timeoutOccured;
- (int)userType;
- (void)writeTo:(id)arg1;

@end
