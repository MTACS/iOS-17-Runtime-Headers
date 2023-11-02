
@protocol SWActionProvider <NSObject>

@required

- (<SWEmbedAction> *)action;
- (void)onAction:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SWEmbedAction> *, void*

@end
