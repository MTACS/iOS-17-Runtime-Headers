
@interface PXCNComposeRecipientView : PXComposeRecipientView <CNComposeRecipientTextViewDelegate> {
    NSMutableArray * _internalRecipients;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
    CNComposeRecipientTextView * _recipientTextView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addButton;
- (void)addRecipient:(id)arg1;
- (void)addRecipients:(id)arg1;
- (bool)becomeFirstResponder;
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 disambiguateRecipientForAtom:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)label;
- (void)layoutSubviews;
- (long long)maxRecipients;
- (id)recipients;
- (void)removeRecipient:(id)arg1;
- (void)removeRecipients:(id)arg1;
- (bool)resignFirstResponder;
- (void)setLabel:(id)arg1;
- (void)setMaxRecipients:(long long)arg1;
- (void)setSeparatorHidden:(bool)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;

@end
