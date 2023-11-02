
@interface SSReadingList : NSObject {
    WebBookmarksXPCConnection * _connection;
}

+ (id)defaultReadingList;
+ (bool)supportsURL:(id)arg1;

- (void).cxx_destruct;
- (bool)_addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3;
- (id)_init;
- (void)_setUpConnectionIfNeeded;
- (bool)addReadingListItemWithURL:(id)arg1 title:(id)arg2 previewText:(id)arg3 error:(id*)arg4;
- (id)init;

@end
