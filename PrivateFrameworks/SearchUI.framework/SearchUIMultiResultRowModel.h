
@interface SearchUIMultiResultRowModel : SearchUIRowModel {
    NSArray * _multiResults;
}

@property (retain) NSArray *multiResults;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (Class)cellViewClass;
- (Class)collectionViewCellClass;
- (id)dragAppBundleID;
- (bool)fillsBackgroundWithContent;
- (id)initWithResults:(id)arg1 itemIdentifier:(id)arg2;
- (bool)isDraggable;
- (bool)isFocusable;
- (bool)isTappable;
- (id)multiResults;
- (long long)removeResult:(id)arg1;
- (id)results;
- (int)separatorStyle;
- (void)setMultiResults:(id)arg1;

@end
