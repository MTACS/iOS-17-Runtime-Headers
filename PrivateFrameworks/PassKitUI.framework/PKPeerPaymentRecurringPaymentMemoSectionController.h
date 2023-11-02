
@interface PKPeerPaymentRecurringPaymentMemoSectionController : PKDynamicListSectionController <PKPeerPaymentRecurringPaymentMemoCellDelegate> {
    <PKPeerPaymentRecurringPaymentMemoSectionControllerDelegate> * _delegate;
    bool  _isEditable;
    PKPeerPaymentRecurringPaymentMemoRowItem * _item;
    UIColor * _memoTextColor;
}

@property (nonatomic) bool isEditable;
@property (nonatomic, copy) UIColor *memoTextColor;
@property (nonatomic, retain) PKPeerPaymentRecurringPaymentMemo *recurringPaymentMemo;

- (void).cxx_destruct;
- (void)_reloadItemWithMemo:(id)arg1 animated:(bool)arg2;
- (id)cellRegistrationForItem:(id)arg1;
- (id)identifiers;
- (id)initWithRecurringPaymentMemo:(id)arg1 contact:(id)arg2 delegate:(id)arg3;
- (bool)isEditable;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)memoIconWasTapped;
- (id)memoTextColor;
- (void)memoTextWasUpdated:(id)arg1;
- (id)recurringPaymentMemo;
- (void)requestBecomeFirstResponder;
- (void)setIsEditable:(bool)arg1;
- (void)setMemoTextColor:(id)arg1;
- (void)setRecurringPaymentMemo:(id)arg1;
- (void)setRecurringPaymentMemoWithTextSuggestion:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
