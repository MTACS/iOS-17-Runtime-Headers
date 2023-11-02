
@protocol HKGraphSeriesAxisAnnotation <NSObject>

@required

- (void)addAxisAnnotation:(NSAttributedString *)arg1 forSeries:(HKGraphSeries *)arg2 modelCoordinate:(id)arg3;
- (long long)applyAnnotationForSeries:(NSArray *)arg1;
- (void)clearAxisAnnotations;
- (void)startAnnotationSequence;

@end
