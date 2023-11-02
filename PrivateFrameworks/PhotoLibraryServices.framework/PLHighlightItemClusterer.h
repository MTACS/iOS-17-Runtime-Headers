
@interface PLHighlightItemClusterer : NSObject {
    <PLHighlightItemClustererRule> * _rule;
}

@property (nonatomic, readonly) <PLHighlightItemClustererRule> *rule;

- (void).cxx_destruct;
- (id)initWithRule:(id)arg1;
- (id)processHighlightItems:(id)arg1 withRestoredHighlightItemLists:(id)arg2 progressBlock:(id /* block */)arg3;
- (void)restoreExistingHighlightItemListsFromUpdatedHighlightItems:(id)arg1 deletedHighlightItems:(id)arg2 usingModelReader:(id)arg3 progressBlock:(id /* block */)arg4 restoreBlock:(id /* block */)arg5;
- (id)rule;

@end
