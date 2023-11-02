
@interface MailUI.MessageListCollectionHeaderView : UICollectionReusableView {
    void layoutValuesHelper;
    void titleLabel;
    void useSplitViewStyling;
}

@property (nonatomic, retain) MessageListCellLayoutValuesHelper *layoutValuesHelper;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool useSplitViewStyling;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutValuesHelper;
- (void)setLayoutValuesHelper:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUseSplitViewStyling:(bool)arg1;
- (id)title;
- (bool)useSplitViewStyling;

@end
