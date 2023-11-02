
@interface IMStewieStoppedSharingChatItem : IMTranscriptChatItem {
    IMChat * _chat;
    IMHandle * _handle;
}

@property (nonatomic) IMChat *chat;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 emergencyUserHandle:(id)arg2 chat:(id)arg3;
- (id)chat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)handle;
- (void)setChat:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
