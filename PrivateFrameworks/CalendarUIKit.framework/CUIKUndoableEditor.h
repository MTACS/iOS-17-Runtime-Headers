
@interface CUIKUndoableEditor : NSObject <CUIKEditor> {
    <CUIKCommitDelegate> * _commitDelegate;
    <CUIKDecisionDelegate> * _decisionDelegate;
    CUIKEditingManager * _editingManager;
    <CUIKUndoDelegate> * _undoDelegate;
}

@property (nonatomic) <CUIKCommitDelegate> *commitDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CUIKDecisionDelegate> *decisionDelegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <CUIKUndoDelegate> *undoDelegate;

- (void).cxx_destruct;
- (id)_openEditingContextForObjects:(id)arg1;
- (bool)_saveChangesToEvents:(id)arg1 span:(long long)arg2 impliedCommitDecision:(bool)arg3 error:(id*)arg4;
- (id)commitDelegate;
- (bool)commitEventForOOPModificationRecording:(id)arg1 error:(id*)arg2;
- (id)decisionDelegate;
- (void)deleteCalendar:(id)arg1 forEntityType:(unsigned long long)arg2;
- (void)deleteCalendars:(id)arg1;
- (bool)deleteEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3;
- (void)deleteEvents:(id)arg1;
- (void)deleteEvents:(id)arg1 span:(long long)arg2;
- (void)deleteSources:(id)arg1;
- (id)initWithEditingManager:(id)arg1;
- (bool)saveCalendar:(id)arg1 error:(id*)arg2;
- (void)saveCalendars:(id)arg1;
- (void)saveChangesToEvents:(id)arg1 impliedCommitDecision:(bool)arg2;
- (void)saveChangesToEvents:(id)arg1 span:(long long)arg2;
- (void)saveChangesToSources:(id)arg1;
- (bool)saveEvent:(id)arg1 span:(long long)arg2 error:(id*)arg3;
- (bool)saveEventForOOPModificationRecording:(id)arg1 span:(long long)arg2 error:(id*)arg3;
- (bool)saveNewEvents:(id)arg1 commit:(bool)arg2 error:(id*)arg3;
- (void)saveNewSources:(id)arg1 commit:(bool)arg2;
- (void)setCommitDelegate:(id)arg1;
- (void)setDecisionDelegate:(id)arg1;
- (void)setUndoDelegate:(id)arg1;
- (id)undoDelegate;

@end
