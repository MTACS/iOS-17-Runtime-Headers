
@interface NMBUIDisclosureMediaTableCell : PSTableCell {
    NMBUIDownloadProgressView * _downloadProgressView;
}

@property (nonatomic, retain) NMBUIDownloadProgressView *downloadProgressView;

- (void).cxx_destruct;
- (void)_handleDownloadIndicatorTapGesture:(id)arg1;
- (void)_setDownloadState:(id)arg1;
- (bool)_shouldDisplayDownloadProgressViewForDownloadState:(id)arg1;
- (id)downloadProgressView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setDownloadProgressView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
