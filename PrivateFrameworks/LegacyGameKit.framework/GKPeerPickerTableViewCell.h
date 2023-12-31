
@interface GKPeerPickerTableViewCell : UITableViewCell {
    bool  _topSeparator;
}

@property (nonatomic) bool topSeparator;

+ (void)initialize;
+ (double)separatorHeight;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setTopSeparator:(bool)arg1;
- (bool)topSeparator;

@end
