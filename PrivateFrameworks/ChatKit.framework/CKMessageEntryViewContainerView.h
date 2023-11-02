
@interface CKMessageEntryViewContainerView : UIView {
    <CKMessageEntryViewContainerViewDelegate> * _entryViewContainerViewDelegate;
    NSLayoutConstraint * _entryViewStuckToChatControllerBottomLayoutConstraint;
}

@property (nonatomic) <CKMessageEntryViewContainerViewDelegate> *entryViewContainerViewDelegate;
@property (nonatomic, retain) NSLayoutConstraint *entryViewStuckToChatControllerBottomLayoutConstraint;

- (void).cxx_destruct;
- (id)entryViewContainerViewDelegate;
- (id)entryViewStuckToChatControllerBottomLayoutConstraint;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setEntryViewContainerViewDelegate:(id)arg1;
- (void)setEntryViewStuckToChatControllerBottomLayoutConstraint:(id)arg1;

@end
