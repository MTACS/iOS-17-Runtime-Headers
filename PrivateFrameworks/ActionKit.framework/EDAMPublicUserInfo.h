
@interface EDAMPublicUserInfo : FATObject {
    NSString * _noteStoreUrl;
    NSNumber * _privilege;
    NSNumber * _serviceLevel;
    NSString * _shardId;
    NSNumber * _userId;
    NSString * _username;
    NSString * _webApiUrlPrefix;
}

@property (nonatomic, retain) NSString *noteStoreUrl;
@property (nonatomic, retain) NSNumber *privilege;
@property (nonatomic, retain) NSNumber *serviceLevel;
@property (nonatomic, retain) NSString *shardId;
@property (nonatomic, retain) NSNumber *userId;
@property (nonatomic, retain) NSString *username;
@property (nonatomic, retain) NSString *webApiUrlPrefix;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)noteStoreUrl;
- (id)privilege;
- (id)serviceLevel;
- (void)setNoteStoreUrl:(id)arg1;
- (void)setPrivilege:(id)arg1;
- (void)setServiceLevel:(id)arg1;
- (void)setShardId:(id)arg1;
- (void)setUserId:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setWebApiUrlPrefix:(id)arg1;
- (id)shardId;
- (id)userId;
- (id)username;
- (id)webApiUrlPrefix;

@end
