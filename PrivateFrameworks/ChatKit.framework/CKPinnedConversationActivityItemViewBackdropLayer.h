
@interface CKPinnedConversationActivityItemViewBackdropLayer : CABackdropLayer {
    long long  _userInterfaceStyle;
}

@property (nonatomic) long long userInterfaceStyle;

- (void)_updateBackgroundColor;
- (id)init;
- (void)setUserInterfaceStyle:(long long)arg1;
- (long long)userInterfaceStyle;

@end
