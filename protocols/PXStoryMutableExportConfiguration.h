
@protocol PXStoryMutableExportConfiguration <NSObject>

@required

- (NSString *)activityCategory;
- (NSString *)activityType;
- (void)copyOptionalPropertiesFromOtherExportConfiguration:(PXStoryExportConfiguration *)arg1;
- (<PXStoryErrorReporter> *)errorReporter;
- (void)setActivityCategory:(NSString *)arg1;
- (void)setActivityType:(NSString *)arg1;
- (void)setErrorReporter:(id <PXStoryErrorReporter>)arg1;

@end
