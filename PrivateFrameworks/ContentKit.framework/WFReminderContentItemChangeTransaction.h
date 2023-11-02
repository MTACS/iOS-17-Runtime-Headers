
@interface WFReminderContentItemChangeTransaction : WFContentItemChangeTransaction {
    REMReminderChangeItem * _mutableReminder;
    REMSaveRequest * _saveRequest;
    REMStore * _store;
}

@property (nonatomic, readonly) REMReminderChangeItem *mutableReminder;
@property (nonatomic, retain) REMSaveRequest *saveRequest;
@property (nonatomic, readonly) REMStore *store;

+ (void)addImageFiles:(id)arg1 toAttachmentContext:(id)arg2;

- (void).cxx_destruct;
- (void)addImageFiles:(id)arg1;
- (void)addSubtasks:(id)arg1;
- (void)addTags:(id)arg1;
- (id)initWithContentItem:(id)arg1;
- (id)mutableReminder;
- (void)removeAllImageAttachments;
- (void)removeAllSubtasks;
- (void)removeSubtasks:(id)arg1;
- (id)saveRequest;
- (void)saveWithCompletionHandler:(id /* block */)arg1 isNew:(bool)arg2;
- (void)setSaveRequest:(id)arg1;
- (id)store;
- (void)updateImageFiles:(id)arg1;
- (void)updateList:(id)arg1;
- (void)updateSubtasks:(id)arg1;
- (void)updateTags:(id)arg1;

@end
