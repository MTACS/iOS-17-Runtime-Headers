
@interface ATXNPlusOneStudyAppLaunchCounts : NSObject {
    long long  _numAppLaunchPast14Day;
    long long  _numAppLaunchPast28Day;
    long long  _numAppLaunchPast3Day;
    long long  _numAppLaunchPast7Day;
    long long  _numAppLaunchPastDay;
}

@property (nonatomic) long long numAppLaunchPast14Day;
@property (nonatomic) long long numAppLaunchPast28Day;
@property (nonatomic) long long numAppLaunchPast3Day;
@property (nonatomic) long long numAppLaunchPast7Day;
@property (nonatomic) long long numAppLaunchPastDay;

- (long long)numAppLaunchPast14Day;
- (long long)numAppLaunchPast28Day;
- (long long)numAppLaunchPast3Day;
- (long long)numAppLaunchPast7Day;
- (long long)numAppLaunchPastDay;
- (void)setNumAppLaunchPast14Day:(long long)arg1;
- (void)setNumAppLaunchPast28Day:(long long)arg1;
- (void)setNumAppLaunchPast3Day:(long long)arg1;
- (void)setNumAppLaunchPast7Day:(long long)arg1;
- (void)setNumAppLaunchPastDay:(long long)arg1;

@end
