
@interface ICTipKitSignaler : NSObject {
    NSNumber * _hasClassifiedImages;
    NSMutableDictionary * _noteModificationDateByIdentifier;
    ICSearchResultsQuery * _queryForClassifiedImages;
}

@property (nonatomic, retain) NSNumber *hasClassifiedImages;
@property (nonatomic, retain) NSMutableDictionary *noteModificationDateByIdentifier;
@property (nonatomic, retain) ICSearchResultsQuery *queryForClassifiedImages;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_clearHasSentSearchSignal:(id)arg1;
- (bool)_hasSentSearchSignal:(id)arg1;
- (void)_sendSignalForEventWithIdentifier:(id)arg1 context:(id)arg2;
- (void)_setHasSentSearchSignal:(id)arg1;
- (void)attachmentAdded:(id)arg1;
- (void)clearHasSentHandwritingSearchResultSelectedSignal;
- (void)clearHasSentImageObjectSearchResultSelectedSignal;
- (void)clearHasSentScannedDocumentSearchResultSelectedSignal;
- (id)clientContextMapForKeys:(id)arg1 selectedObject:(id)arg2;
- (void)dealloc;
- (void)documentImageAdded:(id)arg1;
- (void)fetchHasClassifiedImagesWithCompletionHandler:(id /* block */)arg1;
- (void)galleryAttachmentAddedFromCloud:(id)arg1;
- (id)hasClassifiedImages;
- (void)hashtagAdded:(id)arg1;
- (id)init;
- (void)noteDidSave:(id)arg1;
- (id)noteModificationDateByIdentifier;
- (void)notePinnedStatusChanged:(id)arg1;
- (void)noteWasViewed:(id)arg1 modificationDate:(id)arg2;
- (id)queryForClassifiedImages;
- (void)sendSignalForHashtagAdded:(id)arg1;
- (void)sendSignalForNoteCollaborated:(id)arg1;
- (void)sendSignalForNoteDocumentImageAdded:(id)arg1;
- (void)sendSignalForNoteDocumentScannerUsed:(id)arg1;
- (void)sendSignalForNoteEdited:(id)arg1;
- (void)sendSignalForNoteEditorCameraButtonTapped:(id)arg1;
- (void)sendSignalForNoteEditorMoreButtonTapped:(id)arg1;
- (void)sendSignalForNotePinned:(id)arg1;
- (void)sendSignalForNoteSharedViaMailOrMessages:(id)arg1;
- (void)sendSignalForNoteViewed:(id)arg1;
- (void)sendSignalForSearchResultSelectedIfNecessary:(id)arg1;
- (void)sendSignalForSmartFolderAdded:(id)arg1;
- (void)setHasClassifiedImages:(id)arg1;
- (void)setNoteModificationDateByIdentifier:(id)arg1;
- (void)setQueryForClassifiedImages:(id)arg1;
- (void)smartFolderAdded:(id)arg1;

@end
