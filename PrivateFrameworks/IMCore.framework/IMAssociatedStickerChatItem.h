
@interface IMAssociatedStickerChatItem : IMAssociatedMessageChatItem {
    NSString * _transferGUID;
}

@property (nonatomic, readonly, copy) NSString *transferGUID;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 sender:(id)arg2 transferGUID:(id)arg3;
- (bool)canDelete;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)transferGUID;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
