
@interface IMLocationUpdateSentChatItem : IMTranscriptChatItem {
    NSString * _chatIdentifier;
}

@property (nonatomic, readonly) NSString *chatIdentifier;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 chatIdentifier:(id)arg2;
- (id)chatIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
