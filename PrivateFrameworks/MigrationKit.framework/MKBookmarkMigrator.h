
@interface MKBookmarkMigrator : MKMigrator {
    WebBookmarkCollection * _collection;
    NSMutableDictionary * _rootFolder;
}

- (void).cxx_destruct;
- (id)_bookmarkFolderAtTitlePath:(id)arg1 withinBookmarkFolder:(id)arg2;
- (id)_bookmarkFolderAtTitlePath:(id)arg1 withinRootFolder:(id)arg2;
- (id)_createBookmarkFolderWithTitle:(id)arg1 UUID:(id)arg2;
- (id)_createRootBookmarkFolder;
- (void)import:(id)arg1;
- (void)importDataEncodedInJSON:(id)arg1;
- (id)init;

@end
