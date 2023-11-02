
@protocol VNObservationsRecipient <NSObject, VNOriginatingRequestSpecifierProviding>

@required

- (void)receiveObservations:(NSArray *)arg1;

@end
