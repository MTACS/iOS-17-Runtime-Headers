
@protocol ATXTransitionPredictorProtocol <NSObject>

@required

- (ATXPredictedTransition *)getNextTransitionOnActivity:(id <ATXActivityDeferCheckableProtocol>)arg1;

@end
