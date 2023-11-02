
@protocol DYGraphicsAPIInfo <NSObject>

@required

- (NSDictionary *)defaultSamplePositions;
- (bool)supportsCapabilitiesOfGraphicsAPI:(id <DYGraphicsAPIInfo>)arg1;

@optional

- (NSString *)descriptionForBugReport;

@end
