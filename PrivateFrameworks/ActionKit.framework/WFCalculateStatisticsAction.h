
@interface WFCalculateStatisticsAction : WFAction

+ (bool)outputIsExemptFromTaintTrackingInheritance;

- (id)outputName;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end
