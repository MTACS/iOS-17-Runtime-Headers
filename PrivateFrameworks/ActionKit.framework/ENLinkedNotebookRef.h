
@interface ENLinkedNotebookRef : NSObject <NSCoding> {
    NSString * _guid;
    NSString * _noteStoreUrl;
    NSString * _shardId;
    NSString * _sharedNotebookGlobalId;
}

@property (nonatomic, retain) NSString *guid;
@property (nonatomic, retain) NSString *noteStoreUrl;
@property (nonatomic, retain) NSString *shardId;
@property (nonatomic, retain) NSString *sharedNotebookGlobalId;

+ (id)linkedNotebookRefFromLinkedNotebook:(id)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)guid;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)noteStoreUrl;
- (void)setGuid:(id)arg1;
- (void)setNoteStoreUrl:(id)arg1;
- (void)setShardId:(id)arg1;
- (void)setSharedNotebookGlobalId:(id)arg1;
- (id)shardId;
- (id)sharedNotebookGlobalId;

@end
