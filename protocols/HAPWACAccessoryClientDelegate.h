
@protocol HAPWACAccessoryClientDelegate

@required

- (void)hapWACAccessoryClient:(HAPWACAccessoryClient *)arg1 setBonjourInfo:(NSDictionary *)arg2;
- (void)hapWACAccessoryClient:(HAPWACAccessoryClient *)arg1 wacProgress:(unsigned long long)arg2;

@end
