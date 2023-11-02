
@interface TRIPruningFactorLevelCacheGuardedData : NSObject {
    id /* block */  loadFactorLevels;
    NSMutableDictionary * prefetchedLevels;
    NSMutableDictionary * requiredLevels;
}

- (void).cxx_destruct;

@end
