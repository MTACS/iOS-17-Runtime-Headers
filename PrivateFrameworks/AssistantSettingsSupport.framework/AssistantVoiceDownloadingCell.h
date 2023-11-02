
@interface AssistantVoiceDownloadingCell : PSTableCell {
    bool  _downloading;
    AssistantVoiceDownloadingView * _downloadingView;
}

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setDownloading:(bool)arg1;

@end
