
@interface WBSHistoryTagDatabaseController : NSObject {
    WBSSQLiteDatabase * _database;
}

- (void).cxx_destruct;
- (bool)assignURLString:(id)arg1 toTopicTagsWithIDs:(id)arg2 error:(id*)arg3;
- (bool)clearAllTagsWithError:(id*)arg1;
- (bool)clearTagsFromStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;
- (id)createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 error:(id*)arg5;
- (id)initWithDatabase:(id)arg1;
- (bool)renameTagWithID:(long long)arg1 toTitle:(id)arg2 error:(id*)arg3;

@end
