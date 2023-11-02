
@interface SKUIGiftRecipientTableViewCell : UITableViewCell <CNComposeRecipientTextViewDelegate, CNContactPickerDelegate, SKUIGiftContactSearchDelegate> {
    CNContactPickerViewController * _contactPickerController;
    CNContactStore * _contactStore;
    bool  _didLayoutSubviews;
    bool  _leftToRight;
    UILabel * _placeholderLabel;
    CNComposeRecipientTextView * _recipientView;
    SKUIGiftContactSearchController * _searchController;
    UIView * _topBorderView;
}

@property (nonatomic, copy) NSAttributedString *attributedPlaceholder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didLayoutSubviews;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) bool leftToRight;
@property (nonatomic, copy) NSArray *recipientAddresses;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contactStore;
- (void)_resetSearchController;
- (void)_sendDidChangeRecipients;
- (void)_sendDidUpdateSearchController;
- (void)_sendDismissContactPicker;
- (id)attributedPlaceholder;
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)dealloc;
- (bool)didLayoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)label;
- (void)layoutSubviews;
- (bool)leftToRight;
- (void)presentPeoplePickerPopover:(id)arg1 animated:(bool)arg2;
- (void)presentSearchResultsPopover:(id)arg1 animated:(bool)arg2;
- (id)recipientAddresses;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (void)searchController:(id)arg1 didSelectRecipient:(id)arg2;
- (void)searchControllerDidFinishSearch:(id)arg1;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setDidLayoutSubviews:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLeftToRight:(bool)arg1;
- (void)setRecipientAddresses:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
