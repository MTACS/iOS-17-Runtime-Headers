
@interface EKEventTextDetailItem : EKEventDetailItem {
    UITableViewCell * _cell;
    bool  _cellNeedsUpdate;
    UITableViewCell * _moreButtonCell;
    <EKEventDetailTextCellDelegate> * _textDelegate;
}

@property (nonatomic) <EKEventDetailTextCellDelegate> *textDelegate;

+ (id)moreButtonLabel;
+ (id /* block */)textFromEventBlock;
+ (id)titleForCell;
+ (id)titleForExtendedViewController;

- (void).cxx_destruct;
- (void)_updateCellIfNeeded;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(bool)arg3;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (unsigned long long)maximumNumberOfSubItems;
- (unsigned long long)numberOfSubitems;
- (bool)requiresLayoutForSubitemCount;
- (void)reset;
- (void)setCellPosition:(int)arg1;
- (void)setTextDelegate:(id)arg1;
- (id)textDelegate;
- (id)textForCopyAction;
- (id)textForExtendedViewController;

@end
