
@interface VideosUI.SeasonPickerButton : UIControl {
    void altLabel;
    void chevronDownImageView;
    void currentIndex;
    void currentLabel;
    void delegate;
    void headerTitles;
    void textLayout;
}

@property (nonatomic, readonly) VUILabel *accessibilityAltLabel;
@property (nonatomic, readonly) VUILabel *accessibilityCurrentLabel;
@property (nonatomic, readonly) NSArray *accessibilityHeaderTitles;

- (void).cxx_destruct;
- (id)accessibilityAltLabel;
- (id)accessibilityCurrentLabel;
- (id)accessibilityHeaderTitles;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
