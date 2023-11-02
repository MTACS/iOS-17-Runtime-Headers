
@protocol CKCollaborationNoticeSuggestionDelegate <NSObject>

@required

- (void)addToCollaboration:(CKCollaborationNoticeSuggestion *)arg1;
- (void)collaborationNoticeSuggestionWillDismiss:(CKCollaborationNoticeSuggestion *)arg1;
- (void)removeFromCollaboration:(CKCollaborationNoticeSuggestion *)arg1;

@end
