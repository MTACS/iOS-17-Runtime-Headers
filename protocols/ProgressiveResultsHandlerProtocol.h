
@protocol ProgressiveResultsHandlerProtocol

@required

- (void)completedWithError:(NSError *)arg1;
- (void)receiveProgressiveContacts:(NSArray *)arg1 matchInfos:(NSDictionary *)arg2;

@end
