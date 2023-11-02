
@protocol _UIOMenuPresentationClient <NSObject>

@required

- (void)performMenuLeafAction:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: _UIOMenuLeafPerformAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)preparedMenuWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIMenu *, void*

@end
