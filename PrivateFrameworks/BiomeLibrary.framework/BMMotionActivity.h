
@interface BMMotionActivity : BMEventBase <BMStoreData> {
    bool  _automotive;
    int  _confidence;
    bool  _cycling;
    bool  _hasAutomotive;
    bool  _hasCycling;
    bool  _hasRaw_startDate;
    bool  _hasRunning;
    bool  _hasStationary;
    bool  _hasUnknown;
    bool  _hasWalking;
    double  _raw_startDate;
    bool  _running;
    bool  _stationary;
    bool  _unknown;
    bool  _walking;
}

@property (nonatomic, readonly) bool automotive;
@property (nonatomic, readonly) int confidence;
@property (nonatomic, readonly) bool cycling;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAutomotive;
@property (nonatomic) bool hasCycling;
@property (nonatomic) bool hasRunning;
@property (nonatomic) bool hasStationary;
@property (nonatomic) bool hasUnknown;
@property (nonatomic) bool hasWalking;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool running;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) bool stationary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool unknown;
@property (nonatomic, readonly) bool walking;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (bool)automotive;
- (int)confidence;
- (bool)cycling;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasAutomotive;
- (bool)hasCycling;
- (bool)hasRunning;
- (bool)hasStationary;
- (bool)hasUnknown;
- (bool)hasWalking;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithStationary:(id)arg1 walking:(id)arg2 running:(id)arg3 automotive:(id)arg4 cycling:(id)arg5 unknown:(id)arg6 startDate:(id)arg7 confidence:(int)arg8;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (bool)running;
- (id)serialize;
- (void)setHasAutomotive:(bool)arg1;
- (void)setHasCycling:(bool)arg1;
- (void)setHasRunning:(bool)arg1;
- (void)setHasStationary:(bool)arg1;
- (void)setHasUnknown:(bool)arg1;
- (void)setHasWalking:(bool)arg1;
- (id)startDate;
- (bool)stationary;
- (bool)unknown;
- (bool)walking;
- (void)writeTo:(id)arg1;

@end
