
@protocol MTEpisodeLevelCalculatorProtocol

@required

- (void)unsafeUpdateEpisodeLevelsWithShowUUID:(NSString *)arg1 on:(NSManagedObjectContext *)arg2;
- (void)unsafeUpdateEpisodeShowTypeSpecificLevelsWithShowUUID:(NSString *)arg1 on:(NSManagedObjectContext *)arg2;

@end
