
@protocol REElementDataSourceActivityDelegate <NSObject>

@required

- (void)dataSource:(REElementDataSource *)arg1 didBeginActivity:(NSString *)arg2;
- (void)dataSource:(REElementDataSource *)arg1 didFinishActivity:(NSString *)arg2;

@end
