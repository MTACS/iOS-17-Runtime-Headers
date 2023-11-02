
@interface _BMMediaLibraryNode : _BMLibraryNode

+ (id)NowPlaying;
+ (id)Route;
+ (id)StreamingStats;
+ (id)configurationForNowPlaying;
+ (id)configurationForRoute;
+ (id)configurationForStreamingStats;
+ (id)identifier;
+ (id)storeConfigurationForNowPlaying;
+ (id)storeConfigurationForRoute;
+ (id)storeConfigurationForStreamingStats;
+ (id)streamNames;
+ (id)streamWithName:(id)arg1;
+ (id)sublibraries;
+ (id)syncPolicyForNowPlaying;
+ (id)syncPolicyForRoute;
+ (id)syncPolicyForStreamingStats;
+ (id)validKeyPaths;

@end
