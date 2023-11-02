
@protocol SBPIPMorphAnimatorControllerDelegate <NSObject>

@required

- (<SBViewMorphAnimatorDataSource> *)dataSourceForMorphAnimatorController:(SBPIPMorphAnimatorController *)arg1;
- (void)morphAnimatorControllerDidTerminate:(SBPIPMorphAnimatorController *)arg1;

@end
