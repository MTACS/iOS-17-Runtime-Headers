
@interface IMDualSIMUtilitiesManager : NSObject {
    NSDictionary * _conversationListSIMShortNameDictionary;
}

@property (nonatomic, retain) NSDictionary *conversationListSIMShortNameDictionary;

+ (id)_localizedShortNameForSIMID:(id)arg1;
+ (id)_updateConversationListSIMShortNamesDictionary;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_handleSIMSubscriptionsUpdate;
- (id)activeSIMIDs;
- (id)conversationListSIMShortNameDictionary;
- (id)init;
- (void)setConversationListSIMShortNameDictionary:(id)arg1;
- (id)shortNameForSIMLabel:(id)arg1;

@end
