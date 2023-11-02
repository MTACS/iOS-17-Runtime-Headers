
@interface CKReplySenderChatItem : CKSenderChatItem

- (double)_calculateAdditionalOffsetForTapbackWithNextItem:(id)arg1 previousItem:(id)arg2 associatedChatItem:(id)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)layoutItemSpacingWithEnvironment:(id)arg1 datasourceItemIndex:(long long)arg2 allDatasourceItems:(id)arg3 supplementryItems:(id)arg4;
- (id)loadTranscriptText;
- (BOOL)transcriptOrientation;

@end
