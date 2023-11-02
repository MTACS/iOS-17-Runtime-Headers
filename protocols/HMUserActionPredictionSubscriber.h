
@protocol HMUserActionPredictionSubscriber

@required

- (void)didUpdatePredictions:(NSArray *)arg1 forHomeWithIdentifier:(NSUUID *)arg2;

@end
