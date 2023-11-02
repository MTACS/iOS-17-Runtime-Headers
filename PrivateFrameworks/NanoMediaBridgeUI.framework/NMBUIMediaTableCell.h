
@interface NMBUIMediaTableCell : PSSwitchTableCell {
    NMBUIDownloadProgressView * _downloadProgressView;
    UIButton * _errorButton;
}

@property (nonatomic, retain) NMBUIDownloadProgressView *downloadProgressView;

+ (id)_configurationFromSpecifier:(id)arg1;
+ (struct CGSize { double x1; double x2; })artworkSize;

- (void).cxx_destruct;
- (id)_errorButtonWithSpecifier:(id)arg1;
- (void)_handleDownloadIndicatorTapGesture:(id)arg1;
- (void)_setDownloadState:(id)arg1;
- (bool)_shouldDisplayDownloadProgressViewForDownloadState:(id)arg1;
- (id)downloadProgressView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setDownloadProgressView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
