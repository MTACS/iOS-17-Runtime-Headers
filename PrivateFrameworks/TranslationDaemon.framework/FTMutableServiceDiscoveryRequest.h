
@interface FTMutableServiceDiscoveryRequest : FTServiceDiscoveryRequest

@property (nonatomic, copy) NSString *app_id;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *zk_path;

- (id)app_id;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)session_id;
- (void)setApp_id:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setZk_path:(id)arg1;
- (id)zk_path;

@end
