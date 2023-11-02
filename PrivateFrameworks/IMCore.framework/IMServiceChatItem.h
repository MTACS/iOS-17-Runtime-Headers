
@interface IMServiceChatItem : IMTranscriptChatItem {
    IMHandle * _handle;
    IMServiceImpl * _service;
    bool  _stewieSharingChat;
}

@property (nonatomic, readonly) IMHandle *handle;
@property (nonatomic, readonly) IMServiceImpl *service;
@property (getter=isStewieSharingChat, nonatomic) bool stewieSharingChat;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 service:(id)arg2 handle:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)handle;
- (bool)isStewieSharingChat;
- (id)service;
- (void)setStewieSharingChat:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
