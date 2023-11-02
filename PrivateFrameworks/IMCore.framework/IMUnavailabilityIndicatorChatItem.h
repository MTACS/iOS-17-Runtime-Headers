
@interface IMUnavailabilityIndicatorChatItem : IMTranscriptChatItem {
    bool  _displayNotifyAnywayButton;
    IMHandle * _handle;
    NSHashTable * _unavailabilityIndicatorChatItemDelegates;
}

@property (nonatomic) bool displayNotifyAnywayButton;
@property (nonatomic, readonly) IMHandle *handle;
@property (nonatomic, retain) NSHashTable *unavailabilityIndicatorChatItemDelegates;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithHandle:(id)arg1 displayNotifyAnywayButton:(bool)arg2;
- (void)_notifyDelegatesOfStateChange;
- (void)addUnavailabilityIndicatorChatItemDelegate:(id)arg1;
- (bool)displayNotifyAnywayButton;
- (id)handle;
- (void)setDisplayNotifyAnywayButton:(bool)arg1;
- (void)setUnavailabilityIndicatorChatItemDelegates:(id)arg1;
- (id)unavailabilityIndicatorChatItemDelegates;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
