
@interface IMExpressiveSendAsTextChatItem : IMTranscriptChatItem {
    NSString * _text;
}

@property (nonatomic, readonly, copy) NSString *text;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 text:(id)arg2;
- (id)text;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
