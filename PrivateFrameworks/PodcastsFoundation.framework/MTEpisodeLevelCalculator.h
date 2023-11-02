
@interface MTEpisodeLevelCalculator : NSObject <MTEpisodeLevelCalculatorProtocol>

+ (long long)uncalculatedLevel;

- (id)init;
- (void)unsafeUpdateEpisodeLevelsWithShowUUID:(id)arg1 on:(id)arg2;
- (void)unsafeUpdateEpisodeShowTypeSpecificLevelsWithShowUUID:(id)arg1 on:(id)arg2;

@end
