
@interface TULinkShareItem : NSObject <UIActivityItemSource> {
    NSURL * _placeholder;
    NSString * _title;
    TUConversationLink * _tuConversationLink;
}

@property (nonatomic, copy) NSURL *placeholder;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) TUConversationLink *tuConversationLink;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

- (void).cxx_destruct;
- (id)initWithTUConversationLink:(id)arg1;
- (id)initWithTUConversationLink:(id)arg1 title:(id)arg2 placeholder:(id)arg3;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTuConversationLink:(id)arg1;
- (id)title;
- (id)tuConversationLink;

// Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit

- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;

@end
