
@interface ICAttachmentTableModel : ICAttachmentModel {
    ICTableVersionedDocument * _tableDocument;
}

@property (nonatomic, readonly) ICTable *table;
@property (nonatomic, retain) ICTableVersionedDocument *tableDocument;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
+ (id)tableFromAttributedString:(id)arg1 managedObjectContext:(id)arg2 replicaID:(id)arg3;

- (void).cxx_destruct;
- (void)addMergeableDataToCloudKitRecord:(id)arg1 approach:(long long)arg2 mergeableFieldState:(id)arg3;
- (void)attachmentAwakeFromFetch;
- (void)attachmentDidRefresh:(bool)arg1;
- (void)attachmentWillRefresh:(bool)arg1;
- (void)attachmentWillTurnIntoFault;
- (bool)isReadyToPresent;
- (id)localizedFallbackSubtitleIOS;
- (id)localizedFallbackSubtitleMac;
- (id)localizedFallbackTitle;
- (void)mergeTablePrimitiveData;
- (bool)mergeWithMergeableData:(id)arg1 mergeableFieldState:(id)arg2;
- (id)mergeableDataForCopying:(id*)arg1;
- (void)persistPendingChanges;
- (bool)providesTextContentInNote;
- (void)regenerateTextContentInNote;
- (void)removeTimestampsForReplicaID:(id)arg1;
- (void)replaceChildInlineAttachment:(id)arg1 withText:(id)arg2;
- (id)searchableTextContentInNote;
- (void)setTableDocument:(id)arg1;
- (id)stringsAtRow:(unsigned long long)arg1;
- (id)table;
- (id)tableDocument;
- (id)textContentInNote;
- (void)updateAfterLoadWithInlineAttachmentIdentifierMap:(id)arg1;
- (void)updateAttachmentByMergingWithTableData:(id)arg1;
- (void)willMarkAttachmentForDeletion;
- (void)writeCurrentTimestampToMergeableFieldStateIfNecessary:(id)arg1;
- (void)writeMergeableData;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)replaceTextFindingResult:(id)arg1 withReplacementString:(id)arg2 tableViewController:(id)arg3;
- (void)textFindingResultsMatchingString:(id)arg1 ignoreCase:(bool)arg2 wholeWords:(bool)arg3 completion:(id /* block */)arg4;
- (void)undoablyReplaceAllOccurrencesOfQueryString:(id)arg1 ignoreCase:(bool)arg2 wholeWords:(bool)arg3 withText:(id)arg4 tableViewController:(id)arg5;
- (void)undoablyReplaceTextFindingResult:(id)arg1 withReplacementString:(id)arg2 tableViewController:(id)arg3;
- (id)writableTypeIdentifiersForItemProvider;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (id)activityItems;
- (id)attributesForSharingHTMLWithTagName:(id*)arg1 textContent:(id*)arg2;
- (bool)canConvertToHTMLForSharing;
- (void)drawPreviewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)htmlString;
- (struct CGSize { double x1; double x2; })previewInAvailableSize:(struct CGSize { double x1; double x2; })arg1 shouldDraw:(bool)arg2;
- (id)quicklookPreviewItems;
- (void)redactAuthorAttributionsToCurrentUser;

@end
