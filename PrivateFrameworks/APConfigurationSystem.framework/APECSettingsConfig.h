
@interface APECSettingsConfig : APConfiguration

@property (nonatomic, retain) NSNumber *batchSize;
@property (nonatomic, retain) NSNumber *periodicDelay;
@property (nonatomic, retain) NSString *serverEnvironment;
@property (nonatomic, retain) NSDictionary *serverSettings;

+ (id)path;

@end
