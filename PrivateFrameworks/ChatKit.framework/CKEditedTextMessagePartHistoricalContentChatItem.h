
@interface CKEditedTextMessagePartHistoricalContentChatItem : CKTextMessagePartChatItem

- (struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; })balloonDescriptor;
- (BOOL)balloonStyle;
- (Class)balloonViewClass;
- (bool)canBeSelectedInEditMode;
- (BOOL)color;
- (id)editedMessagePartChatItem;
- (id)historicalContent;
- (id)meMentionsTextColor;
- (bool)shouldUseBigEmoji;
- (id)time;
- (bool)wantsOutline;

@end
