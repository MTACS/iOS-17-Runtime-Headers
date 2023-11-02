
@protocol PLHighlightItemClustererRule <NSObject>

@required

- (bool)highlightItem:(id <PLHighlightItem>)arg1 belongsToHighlightItemList:(PLHighlightItemList *)arg2;
- (bool)highlightItemList:(PLHighlightItemList *)arg1 canBeMergedWithOtherHighlightItemList:(PLHighlightItemList *)arg2;
- (void)titlesForHighlightItemList:(void *)arg1 dateRangeTitleGenerator:(void *)arg2 forceUpdateLocale:(void *)arg3 resultBlock:(void *)arg4; // needs 4 arg types, found 10: PLHighlightItemList *, PLDateRangeTitleGenerator *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, void*
- (void)titlesForHighlightItemList:(void *)arg1 dateRangeTitleGenerator:(void *)arg2 resultBlock:(void *)arg3; // needs 3 arg types, found 9: PLHighlightItemList *, PLDateRangeTitleGenerator *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, void*

@end
