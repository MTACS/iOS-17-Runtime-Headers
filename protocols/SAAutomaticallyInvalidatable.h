
@protocol SAAutomaticallyInvalidatable <SAInvalidatable>

@required

- (bool)isAutomaticallyInvalidatable;
- (void)resetAutomaticInvalidationTimer;
- (void)setAutomaticallyInvalidatable:(bool)arg1;
- (bool)setAutomaticallyInvalidatable:(bool)arg1 lockingWithKey:(NSString *)arg2 reason:(NSString *)arg3;

@end
