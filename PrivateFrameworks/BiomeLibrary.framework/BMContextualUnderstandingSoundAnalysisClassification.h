
@interface BMContextualUnderstandingSoundAnalysisClassification : BMEventBase <BMStoreData> {
    double  _confidence;
    unsigned int  _durationInSecs;
    bool  _hasConfidence;
    bool  _hasDurationInSecs;
    bool  _hasStartOffsetInSecs;
    NSString * _soundName;
    unsigned int  _startOffsetInSecs;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned int durationInSecs;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasDurationInSecs;
@property (nonatomic) bool hasStartOffsetInSecs;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *soundName;
@property (nonatomic, readonly) unsigned int startOffsetInSecs;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (double)confidence;
- (unsigned int)dataVersion;
- (id)description;
- (unsigned int)durationInSecs;
- (bool)hasConfidence;
- (bool)hasDurationInSecs;
- (bool)hasStartOffsetInSecs;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSoundName:(id)arg1 confidence:(id)arg2 startOffsetInSecs:(id)arg3 durationInSecs:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasDurationInSecs:(bool)arg1;
- (void)setHasStartOffsetInSecs:(bool)arg1;
- (id)soundName;
- (unsigned int)startOffsetInSecs;
- (void)writeTo:(id)arg1;

@end
