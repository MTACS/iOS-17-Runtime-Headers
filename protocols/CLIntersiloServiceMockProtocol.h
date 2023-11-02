
@protocol CLIntersiloServiceMockProtocol <CLIntersiloServiceProtocol>

@required

- (void)removePayloadForKey:(NSString *)arg1;
- (void)removePayloadForSelector:(SEL)arg1;
- (void)setPayload:(CLIntersiloServiceMockPayload *)arg1 forKey:(NSString *)arg2;
- (void)setPayload:(CLIntersiloServiceMockPayload *)arg1 forSelector:(SEL)arg2;
- (CLIntersiloServiceMockPayload *)syncgetPayloadForKey:(NSString *)arg1;
- (CLIntersiloServiceMockPayload *)syncgetPayloadForSelector:(SEL)arg1;

@end
