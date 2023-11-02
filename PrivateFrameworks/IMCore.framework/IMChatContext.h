
@interface IMChatContext : NSObject <NSCopying, NSMutableCopying> {
    NSUUID * _activeTelephonyConversationUUID;
    long long  _filterCategory;
    bool  _responded;
    bool  _sendersUnknown;
    long long  _serviceType;
    NSArray * _showingEditHistoryForChatItemGUIDs;
    bool  _spam;
}

@property (nonatomic, readonly) NSUUID *activeTelephonyConversationUUID;
@property (nonatomic, readonly) long long filterCategory;
@property (getter=hasResponded, nonatomic, readonly) bool responded;
@property (getter=areSendersUnknown, nonatomic, readonly) bool sendersUnknown;
@property (nonatomic, readonly) long long serviceType;
@property (nonatomic, readonly) NSArray *showingEditHistoryForChatItemGUIDs;
@property (getter=isSpam, nonatomic, readonly) bool spam;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone { }*)arg2;
- (id)activeTelephonyConversationUUID;
- (bool)areSendersUnknown;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)filterCategory;
- (bool)hasResponded;
- (bool)isSpam;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)serviceType;
- (id)showingEditHistoryForChatItemGUIDs;

@end
