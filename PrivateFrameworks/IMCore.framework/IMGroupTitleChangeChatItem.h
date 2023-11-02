
@interface IMGroupTitleChangeChatItem : IMTranscriptChatItem {
    IMHandle * _sender;
}

@property (nonatomic, readonly) IMHandle *sender;
@property (nonatomic, readonly, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 sender:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)sender;
- (id)title;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
