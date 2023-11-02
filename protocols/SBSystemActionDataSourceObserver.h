
@protocol SBSystemActionDataSourceObserver <NSObject>

@required

- (void)systemActionDataSource:(id <SBSystemActionDataSource>)arg1 didUpdateSelectedAction:(SBSystemAction *)arg2;

@end
