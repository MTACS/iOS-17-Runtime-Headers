
@protocol AMUIPosterSwitcherModelObserver <NSObject>

@optional

- (void)posterSwitcherModel:(AMUIPosterSwitcherModel *)arg1 didUpdateActiveConfiguration:(PRSPosterConfiguration *)arg2;
- (void)posterSwitcherModel:(AMUIPosterSwitcherModel *)arg1 didUpdateConfigurations:(NSArray *)arg2;

@end
