
@interface BrowserToolbar : _SFToolbar {
    UIToolbar * _replacementToolbar;
}

@property (nonatomic, readonly) UIToolbar *replacementToolbar;

- (void).cxx_destruct;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)_sceneWillEnterForeground:(id)arg1;
- (void)_updateItemsForReplacementToolbar;
- (id)initWithPlacement:(long long)arg1 hideBackground:(bool)arg2;
- (void)layoutSubviews;
- (id)replacementToolbar;
- (void)setItems:(id)arg1 animated:(bool)arg2;
- (void)setReplacementToolbar:(id)arg1 tintStyle:(long long)arg2 withAnimationDelay:(double)arg3;

@end
