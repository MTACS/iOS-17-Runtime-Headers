
@protocol SLHighlightCenterDelegate <NSObject>

@required

- (void)highlightCenter:(SLHighlightCenter *)arg1 didRemoveHighlights:(NSArray *)arg2;

@optional

- (void)highlightCenterDidAddHighlights:(SLHighlightCenter *)arg1;
- (void)highlightCenterSettingsEnablementHasChanged:(SLHighlightCenter *)arg1;

@end
