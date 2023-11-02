
@protocol SearchUIFeedbackDelegateInternal <SearchUIFeedbackDelegate>

@optional

- (void)didUpdateKeyboardFocusToResult:(SFSearchResult *)arg1 cardSection:(SFCardSection *)arg2;
- (bool)dragInteractionEnabled;
- (NSString *)queryString;
- (void)removeRowModel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SearchUIRowModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)removeSectionContainingRowModel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SearchUIRowModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)removeSectionModel:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SearchUISectionModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)resignTextField;
- (SearchUICommandEnvironment *)searchUICommandEnvironment;
- (void)setDragInteractionEnabled:(bool)arg1;

@end
