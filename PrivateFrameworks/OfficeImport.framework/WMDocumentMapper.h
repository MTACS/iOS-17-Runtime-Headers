
@interface WMDocumentMapper : CMDocumentMapper <CMMapperRoot> {
    NSString * mFileName;
}

@property (readonly) WDDocument *document;

- (void).cxx_destruct;
- (id)archiver;
- (id)blipAtIndex:(unsigned int)arg1;
- (double)bottomMargin;
- (struct CGSize { double x1; double x2; })contentSizeForDevice;
- (int)defaultTabWidth;
- (id)documentTitle;
- (id)fileName;
- (bool)hasSessionBreakAtIndex:(unsigned long long)arg1;
- (double)headerMargin;
- (double)leftMargin;
- (void)mapDefaultCssStylesAt:(id)arg1;
- (void)mapWithState:(id)arg1;
- (struct CGSize { double x1; double x2; })pageSizeForDevice;
- (double)rightMargin;
- (void)setFileName:(id)arg1;
- (id)styleMatrix;
- (double)topMargin;

@end
