
@interface DAPriorityRequest : NSObject {
    long long  _UIDataclasses;
    long long  _refreshDataclasses;
}

@property (nonatomic) long long UIDataclasses;
@property (nonatomic) long long refreshDataclasses;

- (long long)UIDataclasses;
- (long long)refreshDataclasses;
- (void)setRefreshDataclasses:(long long)arg1;
- (void)setUIDataclasses:(long long)arg1;

@end
