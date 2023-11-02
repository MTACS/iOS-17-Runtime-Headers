
@interface EDAMLinkedAccount : FATObject {
    NSString * _guid;
    NSNumber * _inAccountUserId;
    NSString * _noteStoreUrl;
    NSString * _shardId;
    NSNumber * _updateSequenceNum;
    NSString * _webApiUrlPrefix;
}

@property (nonatomic, retain) NSString *guid;
@property (nonatomic, retain) NSNumber *inAccountUserId;
@property (nonatomic, retain) NSString *noteStoreUrl;
@property (nonatomic, retain) NSString *shardId;
@property (nonatomic, retain) NSNumber *updateSequenceNum;
@property (nonatomic, retain) NSString *webApiUrlPrefix;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)guid;
- (id)inAccountUserId;
- (id)noteStoreUrl;
- (void)setGuid:(id)arg1;
- (void)setInAccountUserId:(id)arg1;
- (void)setNoteStoreUrl:(id)arg1;
- (void)setShardId:(id)arg1;
- (void)setUpdateSequenceNum:(id)arg1;
- (void)setWebApiUrlPrefix:(id)arg1;
- (id)shardId;
- (id)updateSequenceNum;
- (id)webApiUrlPrefix;

@end
