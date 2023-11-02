
@interface IMDateChatItem : IMTranscriptChatItem

@property (nonatomic, readonly) NSDate *date;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (id)_initWithItem:(id)arg1;
- (id)date;
- (id)transcriptDate;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
