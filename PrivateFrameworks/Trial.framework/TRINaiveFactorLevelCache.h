
@interface TRINaiveFactorLevelCache : NSObject <TRIFactorLevelCaching> {
    NSDictionary * _factorLevels;
}

- (void).cxx_destruct;
- (void)enumerateFactorLevelsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithFactorLevels:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;

@end
