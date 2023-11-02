
@protocol MUPlaceTileViewModel <NSObject>

@required

- (unsigned long long)expectedNumberOfFooterLines;
- (void)fetchBadgeIconWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, bool, void*
- (void)fetchFallbackIconWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, bool, void*
- (void)fetchImageTilewWithSize:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, bool, void*
- (NSAttributedString *)footerAttributedStringForFont:(UIFont *)arg1;
- (NSAttributedString *)subtitleAttributedStringForFont:(UIFont *)arg1;
- (NSString *)tileName;

@end
