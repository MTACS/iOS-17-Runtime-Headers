
@interface BMSiriPostSiriEngagement : BMEventBase <BMStoreData> {
    NSString * _UISessionID;
    NSString * _appPattern;
    NSString * _conversationPath;
    BMSiriPostSiriEngagementFeatures * _engagementUnderstandingFeatures;
    NSArray * _pseEvents;
    NSArray * _requestIds;
    NSString * _taskID;
    NSString * _taskType;
}

@property (nonatomic, readonly) NSString *UISessionID;
@property (nonatomic, readonly) NSString *appPattern;
@property (nonatomic, readonly) NSString *conversationPath;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMSiriPostSiriEngagementFeatures *engagementUnderstandingFeatures;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *pseEvents;
@property (nonatomic, readonly) NSArray *requestIds;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *taskID;
@property (nonatomic, readonly) NSString *taskType;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)UISessionID;
- (id)_pseEventsJSONArray;
- (id)_requestIdsJSONArray;
- (id)appPattern;
- (id)conversationPath;
- (unsigned int)dataVersion;
- (id)description;
- (id)engagementUnderstandingFeatures;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithUISessionID:(id)arg1 taskID:(id)arg2 taskType:(id)arg3 conversationPath:(id)arg4 appPattern:(id)arg5 requestIds:(id)arg6 engagementUnderstandingFeatures:(id)arg7 pseEvents:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)pseEvents;
- (id)requestIds;
- (id)serialize;
- (id)taskID;
- (id)taskType;
- (void)writeTo:(id)arg1;

@end
