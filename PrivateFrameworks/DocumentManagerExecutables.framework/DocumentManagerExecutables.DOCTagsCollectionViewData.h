
@interface DocumentManagerExecutables.DOCTagsCollectionViewData : NSObject {
    void delegate;
    void pendingExternalChange;
    void tagsUnionCollection;
}

@property (nonatomic, readonly) bool _hasPendingExternalChange;
@property (nonatomic, readonly) long long countOfTags;
@property (nonatomic) <_TtP26DocumentManagerExecutables33DOCTagsCollectionViewDataDelegate_> *delegate;

- (void).cxx_destruct;
- (bool)_hasPendingExternalChange;
- (void)applyPendingExternalChange:(id)arg1 timeout:(double)arg2;
- (void)applyTagsFromNodes:(id)arg1;
- (long long)countOfTags;
- (id)delegate;
- (long long)indexOfTag:(id)arg1;
- (id)init;
- (long long)presenceOf:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tagAtIndex:(long long)arg1;

@end
