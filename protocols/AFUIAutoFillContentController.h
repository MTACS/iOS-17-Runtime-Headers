
@protocol AFUIAutoFillContentController

@required

- (<AFUIModalUIDelegate> *)modalUIDelegate;
- (void)setModalUIDelegate:(id <AFUIModalUIDelegate>)arg1;

@optional

- (void)generateInitialMenu:(void *)arg1 menuChanged:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIMenu *, void*, id /* block */, void*, void, id /* block */, UIMenu *, void*
- (bool)hasSuggestions;

@end
