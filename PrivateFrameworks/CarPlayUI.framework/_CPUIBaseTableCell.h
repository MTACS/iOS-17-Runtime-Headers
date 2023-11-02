
@interface _CPUIBaseTableCell : UITableViewCell {
    bool  _itemEnabled;
}

@property (nonatomic) bool itemEnabled;

+ (id)cellForTableView:(id)arg1;
+ (id)disabledColor;
+ (id)disabledHighlightedColor;
+ (id)identifier;
+ (double)minimumHeight;
+ (double)rowHeight;

- (void)_updateTintColors;
- (void)configureCell;
- (bool)itemEnabled;
- (void)setItemEnabled:(bool)arg1;

@end
