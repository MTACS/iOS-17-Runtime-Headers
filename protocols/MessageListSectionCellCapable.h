
@protocol MessageListSectionCellCapable <NSObject, MessageListCellDisclosureUpdatable, MessageListCellHelperProviding, MessageListItemProviding, MessageListItemFutureLoading, MUIReusableIdentifiable>

@required

- (long long)backgroundViewConfigurationGrouping;
- (<MessageListCellDisclosureDelegate> *)disclosureDelegate;
- (bool)isSelected;
- (bool)needsFlushSeparator;
- (void)setBackgroundViewConfigurationGrouping:(long long)arg1;
- (void)setDisclosureDelegate:(id <MessageListCellDisclosureDelegate>)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setNeedsFlushSeparator:(bool)arg1;
- (void)setNeedsUpdateConfiguration;
- (void)setSelected:(bool)arg1;

@end
