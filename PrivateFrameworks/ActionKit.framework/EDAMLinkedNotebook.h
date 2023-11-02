
@interface EDAMLinkedNotebook : FATObject {
    NSNumber * _businessId;
    NSString * _guid;
    NSString * _noteStoreUrl;
    NSString * _shardId;
    NSString * _shareName;
    NSString * _sharedNotebookGlobalId;
    NSString * _stack;
    NSNumber * _updateSequenceNum;
    NSString * _uri;
    NSString * _username;
    NSString * _webApiUrlPrefix;
}

@property (nonatomic, retain) NSNumber *businessId;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic, retain) NSString *noteStoreUrl;
@property (nonatomic, retain) NSString *shardId;
@property (nonatomic, retain) NSString *shareName;
@property (nonatomic, retain) NSString *sharedNotebookGlobalId;
@property (nonatomic, retain) NSString *stack;
@property (nonatomic, retain) NSNumber *updateSequenceNum;
@property (nonatomic, retain) NSString *uri;
@property (nonatomic, retain) NSString *username;
@property (nonatomic, retain) NSString *webApiUrlPrefix;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)businessId;
- (id)guid;
- (id)noteStoreUrl;
- (void)setBusinessId:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setNoteStoreUrl:(id)arg1;
- (void)setShardId:(id)arg1;
- (void)setShareName:(id)arg1;
- (void)setSharedNotebookGlobalId:(id)arg1;
- (void)setStack:(id)arg1;
- (void)setUpdateSequenceNum:(id)arg1;
- (void)setUri:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setWebApiUrlPrefix:(id)arg1;
- (id)shardId;
- (id)shareName;
- (id)sharedNotebookGlobalId;
- (id)stack;
- (id)updateSequenceNum;
- (id)uri;
- (id)username;
- (id)webApiUrlPrefix;

@end
