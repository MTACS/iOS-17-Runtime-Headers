
@protocol AMUIPosterSelectionCoordinatingDelegate <NSObject>

@required

- (void)posterSelectionCoordinator:(id <AMUIPosterSelectionCoordinating>)arg1 didUpdateLastSelectedPosterConfiguration:(PRSPosterConfiguration *)arg2;
- (NSString *)posterSelectionCoordinatorRequestsConnectedChargerId:(id <AMUIPosterSelectionCoordinating>)arg1;

@end
