
@interface BookmarksTableViewCellLayoutManager : UITableViewCellLayoutManager {
    NSString * _currentContentSizeCategory;
}

@property (nonatomic, retain) NSString *currentContentSizeCategory;

+ (id)sharedManager;

- (void).cxx_destruct;
- (long long)_numberOfLinesForCurrentContentSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessoryEndingRectForCell:(id)arg1 forNewEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessoryStartingRectForCell:(id)arg1 forNewEditingState:(bool)arg2 showingDeleteConfirmation:(bool)arg3;
- (id)currentContentSizeCategory;
- (void)layoutSubviewsOfCell:(id)arg1;
- (void)setCurrentContentSizeCategory:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textRectForCell:(id)arg1 rowWidth:(double)arg2 forSizing:(bool)arg3;

@end
