
@interface CMStylingArchiveManager : CMArchiveManager {
    NSMutableString * mCssString;
    NSMutableDictionary * mStyleCache;
}

- (void).cxx_destruct;
- (id)addCssStyle:(id)arg1;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)commitStylesheet;
- (id)cssStylesheetString;
- (id)init;

@end
