
@interface WBSSmartHistorySearcher : NSObject {
    NSObject<OS_dispatch_queue> * _searchQueue;
    NSArray * _topics;
}

- (void).cxx_destruct;
- (id)_searchItemsInTopic:(id)arg1 forText:(id)arg2 options:(unsigned long long)arg3;
- (id)_searchTopicsForText:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithTopics:(id)arg1;
- (void)performSearchWithText:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;

@end
