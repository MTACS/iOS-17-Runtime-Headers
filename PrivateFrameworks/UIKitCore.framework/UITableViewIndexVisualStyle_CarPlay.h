
@interface UITableViewIndexVisualStyle_CarPlay : NSObject <UITableViewIndexVisualStyle> {
    UIFont * _font;
    UITableViewIndex * _tableViewIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double indexWidth;
@property (nonatomic, readonly) double lineSpacing;
@property (nonatomic, readonly) double minLineSpacing;
@property (readonly) Class superclass;
@property (nonatomic) UITableViewIndex *tableViewIndex;

- (void).cxx_destruct;
- (void)didDrawEntryAtIndex:(long long)arg1 indexBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 entryBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4 originalColor:(id)arg5;
- (id)font;
- (void)handleTouch:(id)arg1 withEvent:(id)arg2 touchedEntryIndex:(long long)arg3;
- (double)indexWidth;
- (id)initWithTableViewIndex:(id)arg1;
- (double)lineSpacing;
- (double)minLineSpacing;
- (void)selectedSectionDidChange:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setTableViewIndex:(id)arg1;
- (id)tableViewIndex;
- (void)trackingDidBegin;
- (void)trackingDidEnd;
- (void)willDrawEntryAtIndex:(long long)arg1 indexBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 entryBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4 originalColor:(id)arg5;

@end
