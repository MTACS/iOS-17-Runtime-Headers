
@protocol CPListTemplateProviding <CPBaseTemplateProviding>

@required

- (void)reloadItems:(NSArray *)arg1;
- (void)reloadTemplate:(CPListTemplate *)arg1;
- (void)updateAssistantCellConfiguration:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: CPAssistantCellConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateSectionHeaderImage:(UIImage *)arg1 forSectionIdentifier:(NSUUID *)arg2;

@end
