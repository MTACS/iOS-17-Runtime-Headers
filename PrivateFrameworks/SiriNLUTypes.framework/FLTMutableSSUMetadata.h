
@interface FLTMutableSSUMetadata : FLTSSUMetadata

@property (nonatomic, copy) NSString *data_version;
@property (nonatomic, copy) NSString *encoder_version;
@property (nonatomic) long long timestamp;
@property (nonatomic, copy) NSArray *user_data;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data_version;
- (id)encoder_version;
- (id)init;
- (void)setData_version:(id)arg1;
- (void)setEncoder_version:(id)arg1;
- (void)setTimestamp:(long long)arg1;
- (void)setUser_data:(id)arg1;
- (long long)timestamp;
- (id)user_data;

@end
