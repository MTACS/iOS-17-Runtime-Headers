
@interface CKSenderChatItem : CKChatItem

- (Class)cellClass;
- (id)cellIdentifier;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)getAttributeTextForMessagesFromEmergencyUser:(id)arg1 transcriptSharingMessageType:(long long)arg2;
- (id)layoutItemSpacingWithEnvironment:(id)arg1 datasourceItemIndex:(long long)arg2 allDatasourceItems:(id)arg3 supplementryItems:(id)arg4;
- (unsigned long long)layoutType;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptText;
- (BOOL)transcriptOrientation;
- (bool)wantsDrawerLayout;

@end
