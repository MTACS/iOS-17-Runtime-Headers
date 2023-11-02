
@protocol HMTriggerBuilder

@required

- (NSArray *)actionSets;
- (void)addActionSet:(HMActionSet *)arg1;
- (bool)isEnabled;
- (NSString *)name;
- (void)removeActionSet:(HMActionSet *)arg1;
- (void)setActionSets:(NSArray *)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setName:(NSString *)arg1;

@end
