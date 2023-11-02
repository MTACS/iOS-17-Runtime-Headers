
@interface WBSURLCompletionHistorySnapshot : NSObject <WBSURLCompletionDataSource> {
    WBSURLCompletionDatabase * _completionDatabase;
    NSObject<OS_dispatch_queue> * _completionDatabaseQueue;
    struct unique_ptr<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>> { 
        struct __compressed_pair<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>> *, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>> { 
            void *__value_; 
        } __ptr_; 
    }  _items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_matchSnapshotForCompletionMatch:(id)arg1;
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 filterResultsUsingProfileIdentifier:(id)arg2 options:(unsigned long long)arg3 withBlock:(id /* block */)arg4;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(bool)arg3;
- (void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 forQueryID:(long long)arg3 withSearchParameters:(id)arg4 filterResultsUsingProfileIdentifier:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)init;
- (id)initWithItems:(struct unique_ptr<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>> { struct __compressed_pair<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>> *, std::default_delete<std::vector<WTF::RefPtr<SafariShared::HistoryURLCompletionItem>>>> { void *x_1_1_1; } x1; })arg1;

@end
