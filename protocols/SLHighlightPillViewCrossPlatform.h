
@protocol SLHighlightPillViewCrossPlatform <UIContextMenuInteractionDelegate, NSObject>

@required

- (void)excludeContextMenuItemsWithIdentifiers:(NSArray *)arg1;
- (double)expectedHeightForMaxWidth:(double)arg1;
- (id)initWithHighlight:(SLHighlight *)arg1 maxWidth:(double)arg2 variant:(unsigned long long)arg3 shouldDrawBlur:(bool)arg4;
- (void)refreshContextMenuItems;

@end
