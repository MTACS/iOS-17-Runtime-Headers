
@interface IMAssistiveAccessCommunicationLimitManager : NSObject {
    CNFavorites * _favorites;
}

@property (nonatomic, retain) CNFavorites *favorites;
@property (nonatomic, readonly) NSArray *selectedContactHandleStrings;
@property (nonatomic, readonly) bool shouldFilterIncomingMessages;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_handleStringForFavoritesEntry:(id)arg1;
- (bool)_isAllowedIncomingContact:(id)arg1;
- (bool)_isSelectedContact:(id)arg1;
- (id)_selectedContactFavoritesEntries;
- (bool)allowsConversationWithHandleIDs:(id)arg1;
- (bool)allowsSendingToHandleIDs:(id)arg1;
- (id)favorites;
- (id)selectedContactHandleStrings;
- (void)setFavorites:(id)arg1;
- (bool)shouldFilterIncomingMessages;

@end
