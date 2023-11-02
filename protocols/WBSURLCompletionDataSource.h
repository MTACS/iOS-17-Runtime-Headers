
@protocol WBSURLCompletionDataSource <NSObject>

@required

- (void)enumerateMatchDataForTypedStringHint:(void *)arg1 filterResultsUsingProfileIdentifier:(void *)arg2 options:(void *)arg3 withBlock:(void *)arg4; // needs 4 arg types, found 9: WBSURLCompletionUserTypedString *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WBSURLCompletionMatchData> *, void*
- (<WBSURLCompletionMatchData> *)fakeBookmarkMatchDataWithURLString:(NSString *)arg1 title:(NSString *)arg2 shouldPreload:(bool)arg3;

@end
