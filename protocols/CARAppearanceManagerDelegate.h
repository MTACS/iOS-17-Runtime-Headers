
@protocol CARAppearanceManagerDelegate <NSObject>

@required

- (void)appearanceManager:(CARAppearanceManager *)arg1 didUpdateMapAppearanceStyle:(long long)arg2 forScreenUUIDs:(NSArray *)arg3;
- (void)appearanceManager:(CARAppearanceManager *)arg1 didUpdateUIAppearanceStyle:(long long)arg2 forScreenUUIDs:(NSArray *)arg3;

@end
