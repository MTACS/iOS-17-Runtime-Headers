
@interface HKSelectedTimeScopeController : NSObject {
    long long  _selectedTimeScope;
}

@property (nonatomic) long long selectedTimeScope;

- (id)init;
- (long long)selectedTimeScope;
- (void)setSelectedTimeScope:(long long)arg1;

@end
