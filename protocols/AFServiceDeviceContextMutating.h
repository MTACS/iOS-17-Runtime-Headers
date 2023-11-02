
@protocol AFServiceDeviceContextMutating <NSObject>

@required

- (void)setAssistantIdentifier:(NSString *)arg1;
- (void)setIdentifier:(NSUUID *)arg1;
- (void)setMediaRouteIdentifier:(NSString *)arg1;
- (void)setMediaSystemIdentifier:(NSString *)arg1;
- (void)setMetricsContext:(NSDictionary *)arg1;
- (void)setProximity:(long long)arg1;
- (void)setRoomName:(NSString *)arg1;
- (void)setSerializedContextByKey:(NSDictionary *)arg1;
- (void)setSharedUserID:(NSString *)arg1;

@end
