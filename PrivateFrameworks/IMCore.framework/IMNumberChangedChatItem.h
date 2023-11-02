
@interface IMNumberChangedChatItem : IMTranscriptChatItem {
    NSString * _sender;
}

@property (nonatomic, readonly) NSString *sender;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 senderHandle:(id)arg2;
- (id)sender;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
