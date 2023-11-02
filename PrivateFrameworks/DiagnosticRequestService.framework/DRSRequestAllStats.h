
@interface DRSRequestAllStats : DRSRequestStats

@property (nonatomic, readonly) NSDictionary *perBuildStats;

+ (Class)childStatsClass;
+ (id)descriptionStringForRequest:(id)arg1;
+ (id)keyName;
+ (id)statsForRequests:(id)arg1;

- (unsigned long long)generateCoreAnalyticsEvents:(bool)arg1;
- (id)init;
- (id)perBuildStats;
- (id)terminalRequestProtobufRepresentation;

@end
