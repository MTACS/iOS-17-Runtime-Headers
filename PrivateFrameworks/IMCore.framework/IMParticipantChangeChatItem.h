
@interface IMParticipantChangeChatItem : IMTranscriptChatItem {
    NSUUID * _activeTelephonyConversationUUID;
    IMHandle * _otherHandle;
    IMHandle * _sender;
}

@property (nonatomic, retain) NSUUID *activeTelephonyConversationUUID;
@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly) IMHandle *otherHandle;
@property (nonatomic, readonly) IMHandle *sender;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3 context:(id)arg4;
- (id)activeTelephonyConversationUUID;
- (long long)changeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)otherHandle;
- (id)sender;
- (void)setActiveTelephonyConversationUUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
