
@protocol ACHQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_achievementsDidFinishInitialFetch:(NSSet *)arg1;
- (void)client_deliverNewAchievements:(NSSet *)arg1;
- (void)client_deliverRemovedAchievements:(NSSet *)arg1;
- (void)client_deliverUpdatedAchievements:(NSSet *)arg1;

@end
