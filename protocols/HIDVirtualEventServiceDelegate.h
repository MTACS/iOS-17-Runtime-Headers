
@protocol HIDVirtualEventServiceDelegate <NSObject>

@required

- (HIDEvent *)copyEventMatching:(NSDictionary *)arg1 forService:(id)arg2;
- (void)notification:(long long)arg1 withProperty:(NSDictionary *)arg2 forService:(id)arg3;
- (id)propertyForKey:(NSString *)arg1 forService:(id)arg2;
- (bool)setOutputEvent:(HIDEvent *)arg1 forService:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(NSString *)arg2 forService:(id)arg3;

@end
