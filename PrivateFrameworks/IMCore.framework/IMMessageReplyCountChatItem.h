
@interface IMMessageReplyCountChatItem : IMMessageStatusChatItem <IMReplyContext> {
    IMItem * _parentItem;
    bool  _replyIsFromMe;
    NSString * _replyMessageGUID;
    NSString * _threadIdentifier;
}

@property (nonatomic, retain) IMItem *_parentItem;
@property (nonatomic, readonly) bool replyIsFromMe;
@property (nonatomic, readonly, copy) NSString *replyMessageGUID;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 parentItem:(id)arg2 threadIdentifier:(id)arg3 replyMessageGUID:(id)arg4 replyIsFromMe:(bool)arg5 count:(unsigned long long)arg6 statusItemSequenceNumber:(unsigned long long)arg7;
- (id)_parentItem;
- (id)copyWithStatusItemSequenceNumber:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)replyIsFromMe;
- (id)replyMessageGUID;
- (void)set_parentItem:(id)arg1;
- (id)threadIdentifier;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
