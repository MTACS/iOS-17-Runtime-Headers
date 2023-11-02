
@protocol CPSPreferredFocusManaging

@required

- (<UIFocusItem> *)preferredFocusItem;
- (void)setPreferredFocusItem:(id <UIFocusItem>)arg1;
- (void)setUsePreferredItemOnNextUpdate:(bool)arg1;
- (bool)usePreferredItemOnNextUpdate;

@end
