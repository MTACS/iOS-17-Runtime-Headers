
@protocol ATXSuggestedSpacesEnvironment

@required

- (NSDictionary *)appLaunchCounts;
- (NSSet *)suggestedApps;
- (ATXSuggestedPagesTunableConstants *)tunableConstants;

@end
