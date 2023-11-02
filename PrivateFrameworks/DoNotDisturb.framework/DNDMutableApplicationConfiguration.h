
@interface DNDMutableApplicationConfiguration : DNDApplicationConfiguration

@property (nonatomic, copy) NSMutableSet *allowedThreads;
@property (nonatomic, copy) NSMutableSet *deniedThreads;
@property (nonatomic) unsigned long long minimumBreakthroughUrgency;

- (void)setAllowedThreads:(id)arg1;
- (void)setDeniedThreads:(id)arg1;
- (void)setMinimumBreakthroughUrgency:(unsigned long long)arg1;

@end
