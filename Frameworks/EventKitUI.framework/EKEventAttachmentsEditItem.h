
@interface EKEventAttachmentsEditItem : EKEventEditItem <EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate, UIDocumentPickerDelegate, UIDropInteractionDelegate> {
    EKUITableViewCell * _addAttachmentCell;
    bool  _attachmentsModified;
    NSArray * _cellControllers;
    bool  _documentPickerPresented;
    EKEvent * _eventToModify;
}

@property bool attachmentsModified;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) EKEvent *eventToModify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addAttachment:(id)arg1;
- (id)_addAttachmentCell;
- (void)_cleanUpCellControllers;
- (void)_loadAndAddDataAttachmentFromItem:(id)arg1;
- (bool)_shouldCondenseIntoSingleItem;
- (bool)_shouldShowAddAttachmentCell;
- (void)_showAddAttachmentViewControllerAnimated:(bool)arg1;
- (void)attachmentEditViewController:(id)arg1 attachmentDidChange:(long long)arg2;
- (id)attachmentEvent;
- (bool)attachmentsModified;
- (bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)eventToModify;
- (id)footerTitle;
- (bool)forceTableReloadOnSave;
- (unsigned long long)numberOfSubitems;
- (id)owningEventForAttachmentCellController:(id)arg1;
- (id)owningEventForAttachmentEditViewController:(id)arg1;
- (id)parentViewControllerForAttachmentCellController:(id)arg1;
- (void)prepareForReload;
- (void)refreshFromCalendarItemAndStore;
- (void)setAttachmentsModified:(bool)arg1;
- (void)setEventToModify:(id)arg1;
- (id)trailingSwipeActionsConfigurationForRowAtIndex:(long long)arg1;
- (bool)usesDetailViewControllerForSubitem:(unsigned long long)arg1;

@end
