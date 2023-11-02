
@interface BMSiriUserEngagementStatisticsUserEngagementStatsMetadata : BMEventBase <BMStoreData> {
    NSString * _audioInputRoute;
    NSString * _deviceFamily;
    bool  _hasWaitTime;
    NSString * _invocationSource;
    NSString * _siriInputLocale;
    NSString * _systemBuild;
    int  _waitTime;
}

@property (nonatomic, readonly) NSString *audioInputRoute;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceFamily;
@property (nonatomic) bool hasWaitTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *invocationSource;
@property (nonatomic, readonly) NSString *siriInputLocale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *systemBuild;
@property (nonatomic, readonly) int waitTime;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)audioInputRoute;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceFamily;
- (bool)hasWaitTime;
- (id)initByReadFrom:(id)arg1;
- (id)initWithDeviceFamily:(id)arg1 siriInputLocale:(id)arg2 systemBuild:(id)arg3 audioInputRoute:(id)arg4 invocationSource:(id)arg5 waitTime:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)invocationSource;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasWaitTime:(bool)arg1;
- (id)siriInputLocale;
- (id)systemBuild;
- (int)waitTime;
- (void)writeTo:(id)arg1;

@end
