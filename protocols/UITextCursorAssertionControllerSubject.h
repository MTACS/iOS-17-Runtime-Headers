
@protocol UITextCursorAssertionControllerSubject <NSObject>

@required

- (bool)cursorBlinks;
- (bool)cursorVisible;
- (bool)ghostAppearance;
- (void)setCursorBlinks:(bool)arg1;
- (void)setCursorVisible:(bool)arg1;
- (void)setGhostAppearance:(bool)arg1;

@optional

- (unsigned long long)activeIndicators;
- (void)setActiveIndicators:(unsigned long long)arg1;
- (void)setActiveIndicators:(unsigned long long)arg1 animationStyle:(long long)arg2;

@end
