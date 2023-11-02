
@interface EKEventDetailItem : NSObject <EKEditItemViewControllerDelegate> {
    bool  _allowsEditing;
    int  _cellPosition;
    <EKEventDetailItemDelegate> * _delegate;
    EKEvent * _event;
    EKEvent * _lastEventUpdated;
    EKUIRecurrenceAlertController * _recurrenceAlertController;
    bool  _shouldIndent;
    EKEventStore * _store;
    UIViewController<EKEditItemViewControllerProtocol> * _viewController;
    UIViewController<EKUINavigationDelegateProvider> * _viewControllerToPresentFrom;
}

@property (nonatomic) bool allowsEditing;
@property (nonatomic) int cellPosition;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKEventDetailItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool detailItemVisibilityChanged;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long maximumNumberOfSubItems;
@property (nonatomic, readonly) bool requiresLayoutForSubitemCount;
@property (nonatomic) bool shouldIndent;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIViewController *viewController;
@property (nonatomic) UIViewController<EKUINavigationDelegateProvider> *viewControllerToPresentFrom;

- (void).cxx_destruct;
- (bool)allowsEditing;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1 withTraitCollection:(id)arg2;
- (int)cellPosition;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (void)dealloc;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(bool)arg3;
- (id)delegate;
- (bool)detailItemVisibilityChanged;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)editItemEventToDetach;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (bool)editItemViewControllerSave:(id)arg1;
- (bool)editItemViewControllerShouldShowDetachAlert;
- (void)eventViewController:(id)arg1 didHighlightSubitem:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 didUnhighlightSubitem:(unsigned long long)arg2;
- (bool)eventViewController:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2;
- (void)eventViewController:(id)arg1 tableViewDidScroll:(id)arg2;
- (void)eventViewControllerDidTapInfoButton:(id)arg1;
- (bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (id)infoDetailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPrivateEvent;
- (bool)isReadOnlyDelegateCalendar;
- (void)layoutCellsForWidth:(double)arg1 position:(int)arg2;
- (unsigned long long)maximumNumberOfSubItems;
- (void)notifyDidCommit;
- (void)notifyDidEndEditing;
- (void)notifyDidStartEditing;
- (void)notifySubitemDidSave:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (void)refreshCopiedEvents;
- (bool)requiresLayoutForSubitemCount;
- (void)reset;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setCellPosition:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (void)setShouldIndent:(bool)arg1;
- (void)setViewController:(id)arg1;
- (void)setViewControllerToPresentFrom:(id)arg1;
- (bool)shouldIndent;
- (id)viewController;
- (id)viewControllerToPresentFrom;

@end
