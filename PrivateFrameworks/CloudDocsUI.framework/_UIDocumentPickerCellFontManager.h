
@interface _UIDocumentPickerCellFontManager : NSObject {
    UIFont * _subtitleFontForGridLayout;
    UIFont * _subtitleFontForTableLayout;
    UIFont * _titleFontForGridLayout;
    UIFont * _titleFontForTableLayout;
}

@property (nonatomic, retain) UIFont *subtitleFontForGridLayout;
@property (nonatomic, retain) UIFont *subtitleFontForTableLayout;
@property (nonatomic, retain) UIFont *titleFontForGridLayout;
@property (nonatomic, retain) UIFont *titleFontForTableLayout;

+ (id)sharedFontManager;

- (void).cxx_destruct;
- (void)cacheFonts;
- (id)init;
- (void)setSubtitleFontForGridLayout:(id)arg1;
- (void)setSubtitleFontForTableLayout:(id)arg1;
- (void)setTitleFontForGridLayout:(id)arg1;
- (void)setTitleFontForTableLayout:(id)arg1;
- (id)subtitleFontForGridLayout;
- (id)subtitleFontForTableLayout;
- (id)titleFontForGridLayout;
- (id)titleFontForTableLayout;

@end
