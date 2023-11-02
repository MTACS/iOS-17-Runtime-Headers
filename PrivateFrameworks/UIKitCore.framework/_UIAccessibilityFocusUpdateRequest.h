
@interface _UIAccessibilityFocusUpdateRequest : _UIFocusUpdateRequest {
    long long  _options;
}

@property (nonatomic) long long options;

- (long long)options;
- (bool)requiresNextFocusedItem;
- (void)setOptions:(long long)arg1;
- (bool)shouldPlayFocusSound;

@end
