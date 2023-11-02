
@interface SFHighlightContactListCell : UIControl {
    CNContact * _contact;
    <SFHighlightContactListCellDelegate> * _delegate;
    bool  _firstInList;
    id /* block */  _infoViewControllerHandler;
    bool  _lastInList;
    UIView * _separator;
}

@property (nonatomic, readonly, copy) CNContact *contact;
@property (nonatomic) <SFHighlightContactListCellDelegate> *delegate;
@property (getter=isFirstInList, nonatomic) bool firstInList;
@property (nonatomic, copy) id /* block */ infoViewControllerHandler;
@property (getter=isLastInList, nonatomic) bool lastInList;

- (void).cxx_destruct;
- (void)_didReceiveTap:(id)arg1;
- (void)_updateMaskedCorners;
- (id)contact;
- (id)delegate;
- (id /* block */)infoViewControllerHandler;
- (id)initWithContact:(id)arg1;
- (bool)isFirstInList;
- (bool)isLastInList;
- (void)setDelegate:(id)arg1;
- (void)setFirstInList:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setInfoViewControllerHandler:(id /* block */)arg1;
- (void)setLastInList:(bool)arg1;

@end
