
@interface IMJunkRecoveryTranscriptChatItem : IMTranscriptChatItem {
    NSDate * _earliestMessageDate;
}

@property (nonatomic, retain) NSDate *earliestMessageDate;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1;
- (id)earliestMessageDate;
- (void)setEarliestMessageDate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
