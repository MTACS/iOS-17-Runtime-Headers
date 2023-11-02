
@interface _UICursorAccessoryView : UIView {
    NSArray * _accessoryIdentifiers;
    UITapGestureRecognizer * _accessoryItemTapGestureRecognizer;
    UIView * _activeHighlightBackgroundView;
    <_UICursorAccessoryItemDataSource> * _dataSource;
    NSMutableOrderedSet * _displayedIdentifiers;
    NSMutableArray * _dividerViews;
    NSMutableDictionary * _itemViewsByIdentifier;
}

@property (nonatomic, retain) NSArray *accessoryIdentifiers;
@property (nonatomic, readonly) double activeAccessoryXOffset;
@property (nonatomic) <_UICursorAccessoryItemDataSource> *dataSource;

+ (double)baseFontSize;
+ (struct CGSize { double x1; double x2; })defaultItemSize;
+ (double)glyphHeight;
+ (double)glyphWidth;
+ (double)grayscaleLuminance:(id)arg1;
+ (struct CGSize { double x1; double x2; })largeItemSize;

- (void).cxx_destruct;
- (void)_cleanupRemovedItemViews;
- (void)_didRecognizeAccessoryTapGestureRecognizer:(id)arg1;
- (id)_displayedItemViewAtIndex:(long long)arg1;
- (void)_ensureNumberOfReusableViews:(unsigned long long)arg1 inArray:(id)arg2 ofClass:(Class)arg3;
- (void)_layoutDisplayedAccessoryItemViews;
- (void)_layoutHighlightView;
- (void)_reloadAccessoryItemViews;
- (void)_scheduleRemovedItemViewCleanup;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unionRectActiveItems;
- (id)accessoryIdentifiers;
- (double)activeAccessoryXOffset;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)setAccessoryIdentifiers:(id)arg1;
- (void)setAccessoryIdentifiers:(id)arg1 animated:(bool)arg2;
- (void)setDataSource:(id)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
