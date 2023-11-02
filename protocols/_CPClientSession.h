
@protocol _CPClientSession <NSObject>

@required

- (void)addExperimentInfo:(_CPExperimentInfo *)arg1;
- (void)addFeedback:(_CPFeedbackPayload *)arg1;
- (NSString *)agent;
- (void)clearExperimentInfo;
- (void)clearFeedback;
- (_CPUsageEnvelope *)cohortsFeedback;
- (NSString *)countryCode;
- (unsigned int)devicePersistentD20;
- (bool)duEnabled;
- (_CPExperimentInfo *)experimentInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)experimentInfoCount;
- (NSArray *)experimentInfos;
- (_CPFeedbackPayload *)feedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackCount;
- (NSArray *)feedbacks;
- (bool)getResourceVersions:(id*)arg1 forKey:(NSString *)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isInternalCarry;
- (NSData *)jsonData;
- (NSData *)jsonFeedback;
- (NSString *)locale;
- (NSString *)parsecDeveloperID;
- (int)previousSessionEndReason;
- (int)privateRelayStatus;
- (bool)removeTimestamps;
- (NSDictionary *)resourceVersions;
- (double)sessionStart;
- (void)setAgent:(NSString *)arg1;
- (void)setCohortsFeedback:(_CPUsageEnvelope *)arg1;
- (void)setCountryCode:(NSString *)arg1;
- (void)setDevicePersistentD20:(unsigned int)arg1;
- (void)setDuEnabled:(bool)arg1;
- (void)setExperimentInfos:(NSArray *)arg1;
- (void)setFeedbacks:(NSArray *)arg1;
- (void)setIsInternalCarry:(bool)arg1;
- (void)setJsonFeedback:(NSData *)arg1;
- (void)setLocale:(NSString *)arg1;
- (void)setParsecDeveloperID:(NSString *)arg1;
- (void)setPreviousSessionEndReason:(int)arg1;
- (void)setPrivateRelayStatus:(int)arg1;
- (void)setRemoveTimestamps:(bool)arg1;
- (void)setResourceVersions:(NSDictionary *)arg1;
- (void)setResourceVersions:(NSString *)arg1 forKey:(NSString *)arg2;
- (void)setSessionStart:(double)arg1;
- (void)setUsageSinceLookback:(_CPUsageSinceLookback *)arg1;
- (void)setUserGuidString:(NSString *)arg1;
- (_CPUsageSinceLookback *)usageSinceLookback;
- (NSString *)userGuidString;

@end
