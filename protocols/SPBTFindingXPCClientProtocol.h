
@protocol SPBTFindingXPCClientProtocol <NSObject>

@required

- (void)findingSessionError:(NSError *)arg1;
- (void)updatedBTRSSIMeasurement:(SPBTRSSIMeasurement *)arg1;
- (void)updatedBTRSSIResult:(SPBTRSSIResult *)arg1;

@end
