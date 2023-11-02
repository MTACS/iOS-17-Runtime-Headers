
@interface DNDSMutableApplicationConfigurationRecord : DNDSApplicationConfigurationRecord

@property (nonatomic, copy) NSSet *allowedThreads;
@property (nonatomic, copy) NSSet *deniedThreads;
@property (nonatomic, copy) NSNumber *minimumBreakthroughUrgency;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAllowedThreads:(id)arg1;
- (void)setDeniedThreads:(id)arg1;
- (void)setMinimumBreakthroughUrgency:(id)arg1;

@end
