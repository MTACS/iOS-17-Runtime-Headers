
@interface BMMapsRecentConversationsIntent : BMEventBase <BMStoreData> {
    int  _actionType;
    NSString * _bundleID;
    BMMapsRecentConversationsIntentContactInformation * _contactInformation;
    bool  _hasRaw_predictionExpiration;
    bool  _hasRaw_predictionTimestamp;
    double  _raw_predictionExpiration;
    double  _raw_predictionTimestamp;
}

@property (nonatomic, readonly) int actionType;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) BMMapsRecentConversationsIntentContactInformation *contactInformation;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *predictionExpiration;
@property (nonatomic, readonly) NSDate *predictionTimestamp;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)actionType;
- (id)bundleID;
- (id)contactInformation;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithContactInformation:(id)arg1 actionType:(int)arg2 predictionTimestamp:(id)arg3 predictionExpiration:(id)arg4 bundleID:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)predictionExpiration;
- (id)predictionTimestamp;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
