
@interface APUIActionCardViewConfig : NSObject {
    NSString * _bundleId;
    bool  _fallbackToCustomResponseString;
    long long  _maxLinesForFootnote;
    long long  _maxLinesForSubtitle;
    long long  _maxLinesForTitle;
    bool  _showActionButton;
    bool  _showAppFootnote;
    bool  _showAppFootnoteIcon;
    bool  _showThumbnailImage;
    unsigned long long  _style;
    bool  _useAppIconAsThumbnail;
    bool  _useTinyIconVariant;
}

@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic) bool fallbackToCustomResponseString;
@property (nonatomic) long long maxLinesForFootnote;
@property (nonatomic) long long maxLinesForSubtitle;
@property (nonatomic) long long maxLinesForTitle;
@property (nonatomic) bool showActionButton;
@property (nonatomic) bool showAppFootnote;
@property (nonatomic) bool showAppFootnoteIcon;
@property (nonatomic) bool showThumbnailImage;
@property (nonatomic) unsigned long long style;
@property (nonatomic) bool useAppIconAsThumbnail;
@property (nonatomic) bool useTinyIconVariant;

- (void).cxx_destruct;
- (id)bundleId;
- (bool)fallbackToCustomResponseString;
- (id)init;
- (long long)maxLinesForFootnote;
- (long long)maxLinesForSubtitle;
- (long long)maxLinesForTitle;
- (void)setBundleId:(id)arg1;
- (void)setFallbackToCustomResponseString:(bool)arg1;
- (void)setMaxLinesForFootnote:(long long)arg1;
- (void)setMaxLinesForSubtitle:(long long)arg1;
- (void)setMaxLinesForTitle:(long long)arg1;
- (void)setShowActionButton:(bool)arg1;
- (void)setShowAppFootnote:(bool)arg1;
- (void)setShowAppFootnoteIcon:(bool)arg1;
- (void)setShowThumbnailImage:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setUseAppIconAsThumbnail:(bool)arg1;
- (void)setUseTinyIconVariant:(bool)arg1;
- (bool)showActionButton;
- (bool)showAppFootnote;
- (bool)showAppFootnoteIcon;
- (bool)showThumbnailImage;
- (unsigned long long)style;
- (bool)useAppIconAsThumbnail;
- (bool)useTinyIconVariant;

@end
