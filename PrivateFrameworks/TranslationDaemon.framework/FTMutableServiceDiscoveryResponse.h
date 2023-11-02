
@interface FTMutableServiceDiscoveryResponse : FTServiceDiscoveryResponse

@property (nonatomic) int error_code;
@property (nonatomic, copy) NSString *error_str;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSArray *zk_node;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)error_code;
- (id)error_str;
- (id)init;
- (id)session_id;
- (void)setError_code:(int)arg1;
- (void)setError_str:(id)arg1;
- (void)setSession_id:(id)arg1;
- (void)setZk_node:(id)arg1;
- (id)zk_node;

@end
