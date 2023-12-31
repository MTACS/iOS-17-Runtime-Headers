
@interface TSDDoubleSegmentedControlTableViewCell : UITableViewCell {
    TSKSegmentedControl * mLeftSegmentedControl;
    TSKSegmentedControl * mRightSegmentedControl;
}

@property (nonatomic, readonly) TSKSegmentedControl *leftSegmentedControl;
@property (nonatomic, readonly) TSKSegmentedControl *rightSegmentedControl;

- (void)dealloc;
- (id)initWithLeftSegmentedControl:(id)arg1 rightSegmentedControl:(id)arg2;
- (void)layoutSubviews;
- (id)leftSegmentedControl;
- (id)rightSegmentedControl;

@end
