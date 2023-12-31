
@protocol RTFrameworkProtocol <NSObject>

@required

- (void)onLeechedLowConfidenceVisit:(RTVisit *)arg1 withError:(NSError *)arg2;
- (void)onLeechedVisit:(RTVisit *)arg1 withError:(NSError *)arg2;
- (void)onScenarioTrigger:(RTScenarioTrigger *)arg1 withError:(NSError *)arg2;
- (void)onVehicleEvents:(NSArray *)arg1 error:(NSError *)arg2;
- (void)onVisit:(RTVisit *)arg1 withError:(NSError *)arg2;

@end
