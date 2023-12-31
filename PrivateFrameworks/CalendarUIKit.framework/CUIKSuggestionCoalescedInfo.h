
@interface CUIKSuggestionCoalescedInfo : NSObject {
    NSString * _descriptionText;
    EKCalendarSuggestionNotification * _earliestSuggestionNotification;
    NSString * _title;
}

@property (readonly) NSString *descriptionText;
@property (readonly) EKCalendarSuggestionNotification *earliestSuggestionNotification;
@property (readonly) NSString *title;

- (void).cxx_destruct;
- (id)descriptionText;
- (id)earliestSuggestionNotification;
- (id)initWithTitle:(id)arg1 descriptionText:(id)arg2 earliestSuggestionNotification:(id)arg3;
- (id)title;

@end
