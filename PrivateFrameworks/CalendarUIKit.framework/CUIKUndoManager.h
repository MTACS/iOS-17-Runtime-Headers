
@interface CUIKUndoManager : NSUndoManager <CUIKUndoDelegate> {
    <CUIKCommitDelegate> * _commitDelegate;
    <CUIKDecisionDelegate> * _decisionDelegate;
    bool  _disableUndoForOrganizerScheduling;
    id /* block */  _editingManagerProvider;
    NSError * _lastError;
    NSMutableDictionary * _specificIdentifierMapForRevert;
    NSMutableDictionary * _specificIdentifierMapForUndo;
    NSMutableDictionary * _undeletedObjectMap;
    CUIKUndoableEditor * _undoableEditor;
}

@property (nonatomic, retain) <CUIKCommitDelegate> *commitDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <CUIKDecisionDelegate> *decisionDelegate;
@property (readonly, copy) NSString *description;
@property bool disableUndoForOrganizerScheduling;
@property (nonatomic, copy) id /* block */ editingManagerProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSError *lastError;
@property (nonatomic, retain) NSMutableDictionary *specificIdentifierMapForRevert;
@property (nonatomic, retain) NSMutableDictionary *specificIdentifierMapForUndo;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *undeletedObjectMap;
@property (nonatomic, retain) CUIKUndoableEditor *undoableEditor;

+ (id)operationForAction:(unsigned long long)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (void)_clearUndeletedObjects;
- (void)_registerUndeletedObject:(id)arg1 withOriginalObjectID:(id)arg2;
- (void)clearUndoOperations;
- (id)commitDelegate;
- (id)decisionDelegate;
- (bool)disableUndoForOrganizerScheduling;
- (id /* block */)editingManagerProvider;
- (void)handleUndoForOperation:(id)arg1;
- (id)init;
- (id)lastError;
- (id)objectToSaveForRevertingChangeToObject:(id)arg1;
- (id)objectToSaveForUndoingChangeToObject:(id)arg1;
- (void)objectWithSpecificIdentifierWasReverted:(id)arg1;
- (void)removeAllActions;
- (void)setCommitDelegate:(id)arg1;
- (void)setDecisionDelegate:(id)arg1;
- (void)setDisableUndoForOrganizerScheduling:(bool)arg1;
- (void)setEditingManagerProvider:(id /* block */)arg1;
- (void)setLastError:(id)arg1;
- (void)setRevertObject:(id)arg1 forSpecificIdentifier:(id)arg2;
- (void)setSpecificIdentifierMapForRevert:(id)arg1;
- (void)setSpecificIdentifierMapForUndo:(id)arg1;
- (void)setUndeletedObjectMap:(id)arg1;
- (void)setUndoObject:(id)arg1 forSpecificIdentifier:(id)arg2;
- (void)setUndoableEditor:(id)arg1;
- (id)specificIdentifierMapForRevert;
- (id)specificIdentifierMapForUndo;
- (id)undeletedObjectMap;
- (void)undoOperation:(id)arg1;
- (id)undoableEditor;

@end
