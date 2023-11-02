
@protocol _UIViewConfigurationStateReadonly <NSObject>

@required

- (long long)_contextMenuGroupLocation;
- (unsigned long long)_viewConfigurationState;
- (bool)isDisabled;
- (bool)isFocused;
- (bool)isHighlighted;
- (bool)isPinned;
- (bool)isSelected;

@end
