
@protocol CXCallObserverDataSourceDelegate <NSObject>

@required

- (void)dataSource:(id <CXCallObserverDataSource>)arg1 callChanged:(CXCall *)arg2;

@end
