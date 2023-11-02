
@protocol CUIKUndoDelegate <NSObject>

@required

- (void)clearUndoOperations;
- (bool)disableUndoForOrganizerScheduling;
- (void)handleUndoForOperation:(CUIKUserOperation *)arg1;
- (EKObject *)objectToSaveForRevertingChangeToObject:(EKObject *)arg1;
- (EKObject *)objectToSaveForUndoingChangeToObject:(EKObject *)arg1;
- (void)objectWithSpecificIdentifierWasReverted:(NSString *)arg1;
- (void)setDisableUndoForOrganizerScheduling:(bool)arg1;
- (void)setRevertObject:(EKObject *)arg1 forSpecificIdentifier:(NSString *)arg2;
- (void)setUndoObject:(EKObject *)arg1 forSpecificIdentifier:(NSString *)arg2;

@end
