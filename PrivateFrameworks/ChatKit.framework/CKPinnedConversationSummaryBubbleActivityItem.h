
@interface CKPinnedConversationSummaryBubbleActivityItem : NSObject <CKPinnedConversationActivityItem> {
    double  _activityItemContentScale;
    NSString * _attachedContactItemIdentifier;
    IMChat * _chat;
    IMMessage * _message;
    NSAttributedString * _summaryText;
}

@property (nonatomic, readonly) bool activityItemAppearsWithAnimation;
@property (nonatomic, readonly) double activityItemContentScale;
@property (nonatomic, readonly) bool activityItemDisappearsWithAnimation;
@property (nonatomic, readonly) NSString *activityItemIdentifier;
@property (nonatomic, readonly) NSString *attachedContactItemIdentifier;
@property (nonatomic, readonly) IMChat *chat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IMMessage *message;
@property (nonatomic, readonly) NSAttributedString *summaryText;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)activityItemAppearsWithAnimation;
- (double)activityItemContentScale;
- (bool)activityItemDisappearsWithAnimation;
- (id)activityItemIdentifier;
- (id)activityItemView;
- (id)attachedContactItemIdentifier;
- (id)chat;
- (id)initWithMessage:(id)arg1 chat:(id)arg2 contentScale:(double)arg3 attachedContactItemIdentifier:(id)arg4;
- (id)initWithSummaryText:(id)arg1;
- (id)message;
- (id)summaryAttributedStringForContentScale:(long long)arg1 userInterfaceStyle:(long long)arg2;
- (id)summaryLabelFontForContentScale:(long long)arg1;
- (id)summaryLabelTextColorForUserInterfaceStyle:(long long)arg1;
- (id)summaryText;

@end
