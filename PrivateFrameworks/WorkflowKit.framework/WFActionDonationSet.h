
@interface WFActionDonationSet : NSObject {
    NSMutableArray * _appSuggestedActions;
    NSMutableArray * _predictedActions;
    NSMutableArray * _recentActions;
}

@property (nonatomic, readonly) NSMutableArray *appSuggestedActions;
@property (nonatomic, readonly) NSMutableArray *predictedActions;
@property (nonatomic, readonly) NSMutableArray *recentActions;

- (void).cxx_destruct;
- (id)appSuggestedActions;
- (id)init;
- (id)predictedActions;
- (id)recentActions;

@end
