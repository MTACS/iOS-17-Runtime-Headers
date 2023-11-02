
@protocol TNPrintableInfoProviding <TSWPHeaderFooterProvider>

@required

- (NSArray *)childInfos;
- (double)contentScale;
- (void)enumerateHeaderFooterStoragesWithBlock:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TSWPStorage *, long long, long long, bool*, void*
- (bool)inPortraitPageOrientation;
- (bool)isAutofitOn;
- (bool)isUsingStartPageNumber;
- (bool)layoutIsLeftToRight;
- (bool)layoutIsRightToLeft;
- (NSString *)name;
- (double)pageFooterInset;
- (double)pageHeaderInset;
- (unsigned long long)pageOrder;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })printMargins;
- (NSArray *)printableInfos;
- (NSArray *)printableInfosIncludingComments:(bool)arg1;
- (bool)shouldBeDisplayed;
- (bool)shouldPrintComments;
- (bool)showPageNumbers;
- (long long)startPageNumber;

@end
