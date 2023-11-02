
@protocol GEOLogContextDelegate <NSObject>

@optional

- (int)currentMapViewTargetForAnalytics;
- (int)currentUITargetForAnalytics;
- (int)searchFieldTypeForAnalytics;

@end
