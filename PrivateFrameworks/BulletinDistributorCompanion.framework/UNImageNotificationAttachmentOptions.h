
@interface UNImageNotificationAttachmentOptions : UNNotificationAttachmentOptions {
    bool  _hiddenFromDefaultExpandedView;
}

@property (nonatomic) bool hiddenFromDefaultExpandedView;

- (bool)hiddenFromDefaultExpandedView;
- (void)setHiddenFromDefaultExpandedView:(bool)arg1;

@end
