
@interface CKTranscriptPluginBreadcrumbChatItem : CKMultilineStampLabelChatItem {
    UIImage * _iconImage;
    CKTranscriptPluginChatItem * _previousPluginChatItem;
}

@property (nonatomic, readonly) IMTranscriptPluginBreadcrumbChatItem *IMChatItem;
@property (nonatomic, readonly) UIImage *iconImage;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } iconSizePlusHorizontalPadding;
@property (nonatomic, retain) CKTranscriptPluginChatItem *previousPluginChatItem;

- (void).cxx_destruct;
- (unsigned long long)_breadcrumbOptionFlags;
- (bool)_wantsCenteredOrientation;
- (bool)_wantsIconImage;
- (Class)cellClass;
- (id)iconImage;
- (struct CGSize { double x1; double x2; })iconSizePlusHorizontalPadding;
- (id)layoutItemSpacingWithEnvironment:(id)arg1 datasourceItemIndex:(long long)arg2 allDatasourceItems:(id)arg3 supplementryItems:(id)arg4;
- (unsigned long long)layoutType;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptText;
- (id)previousPluginChatItem;
- (void)setPreviousPluginChatItem:(id)arg1;
- (BOOL)transcriptOrientation;

@end
