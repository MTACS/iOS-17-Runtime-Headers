
@interface IMBlockContactChatItem : IMTranscriptChatItem {
    unsigned char  _chatStyle;
}

@property (nonatomic) unsigned char chatStyle;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)_initWithItem:(id)arg1 chatStyle:(unsigned char)arg2;
- (unsigned char)chatStyle;
- (void)setChatStyle:(unsigned char)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
