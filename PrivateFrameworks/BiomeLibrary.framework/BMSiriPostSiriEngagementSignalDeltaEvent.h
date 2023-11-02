
@interface BMSiriPostSiriEngagementSignalDeltaEvent : BMEventBase <BMStoreData> {
    double  _duration;
    bool  _hasDuration;
    bool  _hasSinceUIEnd;
    bool  _hasSinceUIStart;
    double  _sinceUIEnd;
    double  _sinceUIStart;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasSinceUIEnd;
@property (nonatomic) bool hasSinceUIStart;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double sinceUIEnd;
@property (nonatomic, readonly) double sinceUIStart;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (double)duration;
- (bool)hasDuration;
- (bool)hasSinceUIEnd;
- (bool)hasSinceUIStart;
- (id)initByReadFrom:(id)arg1;
- (id)initWithDuration:(id)arg1 sinceUIEnd:(id)arg2 sinceUIStart:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasDuration:(bool)arg1;
- (void)setHasSinceUIEnd:(bool)arg1;
- (void)setHasSinceUIStart:(bool)arg1;
- (double)sinceUIEnd;
- (double)sinceUIStart;
- (void)writeTo:(id)arg1;

@end
