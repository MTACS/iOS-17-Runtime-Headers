
@protocol CPListClientTemplateDelegate <CPTemplateDelegate>

@required

- (void)listTemplateWithIdentifier:(NSUUID *)arg1 didSelectImageAtIndex:(unsigned long long)arg2 inImageRowItemWithIdentifier:(NSUUID *)arg3;
- (void)listTemplateWithIdentifier:(void *)arg1 didSelectListItemWithIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: NSUUID *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
