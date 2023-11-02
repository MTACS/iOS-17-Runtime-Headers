
@interface CNUIEditingSessionSaveExecutor : NSObject <CNUIContactSaveExecutor> {
    CNUICoreContactEditingSession * _editingSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNUICoreContactEditingSession *editingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)editingSession;
- (id)executeSaveWithConfiguration:(id)arg1 saveDelegate:(id)arg2;
- (id)init;
- (id)initWithEditingSession:(id)arg1;

@end
