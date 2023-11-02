
@protocol MTPageRenderMeasurementData <MTPerfBaseMeasurementData>

@required

- (NSString *)pageContext;
- (NSString *)pageId;
- (NSString *)pageType;

@end
