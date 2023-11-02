
@protocol SLHighlightPillViewDelegate <NSObject>

@required

- (NSArray *)additionalContextMenuItemsForHighlightPillView:(SLHighlightPillView *)arg1;
- (void)highlightPillViewDidLoadNewRemoteContent:(SLHighlightPillView *)arg1;

@end
