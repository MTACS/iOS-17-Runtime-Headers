
@interface PXComposeRecipientView : UIView {
    UIButton * _addButton;
    UIFont * _baseFont;
    <PXComposeRecipientViewDelegate> * _delegate;
    struct { 
        bool textDidChange; 
        bool didFinishEnteringAddress; 
        bool requestAddRecipient; 
        bool didFinishPickingRecipient; 
        bool disambiguateRecipient; 
        bool didAddRecipient; 
        bool didRemoveRecipient; 
        bool didChangeSize; 
    }  _delegateRespondsTo;
    NSString * _label;
    long long  _maxRecipients;
    NSArray * _recipients;
    bool  _separatorHidden;
    NSString * _text;
    NSSet * _usedAddresses;
}

@property (nonatomic, readonly) UIButton *addButton;
@property (nonatomic, readonly) UIFont *baseFont;
@property (nonatomic) <PXComposeRecipientViewDelegate> *delegate;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) long long maxRecipients;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (getter=isSeparatorHidden, nonatomic) bool separatorHidden;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSSet *usedAddresses;

- (void).cxx_destruct;
- (id)addButton;
- (void)addRecipient:(id)arg1;
- (void)addRecipients:(id)arg1;
- (id)baseFont;
- (id)delegate;
- (id)init;
- (bool)isSeparatorHidden;
- (id)label;
- (long long)maxRecipients;
- (id)recipients;
- (void)removeRecipient:(id)arg1;
- (void)removeRecipients:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxRecipients:(long long)arg1;
- (void)setSeparatorHidden:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setUsedAddresses:(id)arg1;
- (id)text;
- (id)usedAddresses;

@end
