
@protocol AFUISiriCompactViewDelegate <NSObject>

@required

- (void)compactView:(AFUISiriCompactView *)arg1 blurVisibilityDidChange:(bool)arg2;
- (void)compactView:(AFUISiriCompactView *)arg1 bottomContentInsetDidChange:(double)arg2;
- (bool)compactViewRequestAttendingState:(AFUISiriCompactView *)arg1;

@end
