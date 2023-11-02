
@interface IMTUConversationChatItem : IMTranscriptChatItem {
    IMHandle * _conversationInitiator;
}

@property (nonatomic, readonly) unsigned long long conversationAVMode;
@property (nonatomic, readonly) IMHandle *conversationInitiator;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) TUConversation *tuConversation;
@property (nonatomic, readonly) NSUUID *tuConversationUUID;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 conversationInitiator:(id)arg2;
- (id)activeCall;
- (bool)canDelete;
- (unsigned long long)conversationAVMode;
- (id)conversationInitiator;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isFromMe;
- (id)time;
- (id)tuConversation;
- (id)tuConversationUUID;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
