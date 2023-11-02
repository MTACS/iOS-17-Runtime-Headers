
@protocol UIKBEmojiHitTestResponder <NSObject>

@required

- (void)deactivateActiveKey;
- (void)finishSliderBehaviorFeedback;
- (bool)isTrackpadMode;
- (void)prepareSliderBehaviorFeedback;
- (void)provideSliderBehaviorFeedback;
- (void)updateState:(int)arg1 forKey:(UIKBTree *)arg2;

@end
