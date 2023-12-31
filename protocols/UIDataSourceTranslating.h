
@protocol UIDataSourceTranslating <NSObject>

@required

- (NSIndexPath *)dataSourceIndexPathForPresentationIndexPath:(NSIndexPath *)arg1;
- (long long)dataSourceSectionIndexForPresentationSectionIndex:(long long)arg1;
- (void)performUsingPresentationValues:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSIndexPath *)presentationIndexPathForDataSourceIndexPath:(NSIndexPath *)arg1;
- (long long)presentationSectionIndexForDataSourceSectionIndex:(long long)arg1;

@end
