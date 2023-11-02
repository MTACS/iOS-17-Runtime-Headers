
@protocol NTKFaceSupportAnalyticsRepresentable <NSObject>

@required

- (NSString *)ntkfs_analyticsEventName;
- (NSDictionary *)ntkfs_analyticsJSONRepresentation;

@end
