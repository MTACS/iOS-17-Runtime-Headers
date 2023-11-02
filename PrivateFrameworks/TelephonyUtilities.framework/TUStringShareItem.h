
@interface TUStringShareItem : NSObject <UIActivityItemSource> {
    NSString * _message;
}

@property (nonatomic, copy) NSString *message;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit

- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;

@end
