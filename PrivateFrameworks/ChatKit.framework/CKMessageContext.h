
@interface CKMessageContext : NSObject <NSCopying, NSMutableCopying> {
    bool  _audioMessage;
    IMChatContext * _chatContext;
    bool  _fromMe;
    bool  _senderUnauthenticated;
    bool  _senderUnknown;
    NSString * _serviceName;
    bool  _spam;
}

@property (getter=isAudioMessage, nonatomic, readonly) bool audioMessage;
@property (nonatomic, readonly, copy) IMChatContext *chatContext;
@property (getter=isFromMe, nonatomic, readonly) bool fromMe;
@property (getter=isSenderUnauthenticated, nonatomic, readonly) bool senderUnauthenticated;
@property (getter=isSenderUnknown, nonatomic, readonly) bool senderUnknown;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (getter=isSpam, nonatomic, readonly) bool spam;

+ (id)selfContext;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone { }*)arg2;
- (id)chatContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isAudioMessage;
- (bool)isFromMe;
- (bool)isSenderUnauthenticated;
- (bool)isSenderUnknown;
- (bool)isSpam;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)serviceName;

@end
