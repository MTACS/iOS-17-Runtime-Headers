
@interface EDRichLinkPersistence : NSObject <EDPersistenceDatabaseSchemaProvider> {
    EDPersistenceDatabase * _database;
}

@property (nonatomic, retain) EDPersistenceDatabase *database;

+ (id)messageRichLinksTableName;
+ (id)messagesRichLinksTableSchema;
+ (id)richLinksTableName;
+ (id)richLinksTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id*)arg1 associationsToResolve:(id*)arg2;

- (void).cxx_destruct;
- (id)_hashForRichLinkData:(id)arg1;
- (id)_richLinkDirectoryURLWithBasePath:(id)arg1;
- (id)_richLinkFileURLWithID:(id)arg1 basePath:(id)arg2;
- (id)database;
- (id)datasForPersistentIDs:(id)arg1 basePath:(id)arg2;
- (id)initWithDatabase:(id)arg1;
- (id)richLinkDataForPersistentID:(id)arg1 basePath:(id)arg2;
- (id)richLinkFileURLWithID:(id)arg1 basePath:(id)arg2;
- (id)richLinkMetadataDataForPersistentID:(id)arg1 basePath:(id)arg2;
- (id)richLinkPersistentIDsForGlobalMessageID:(long long)arg1;
- (id)saveRichLinkData:(id)arg1 globalMessageID:(long long)arg2 basePath:(id)arg3;
- (id)saveRichLinkData:(id)arg1 url:(id)arg2 title:(id)arg3 globalMessageID:(long long)arg4 basePath:(id)arg5;
- (void)setDatabase:(id)arg1;
- (bool)verifyFileExistsForRichLinkID:(id)arg1 basePath:(id)arg2;

@end
