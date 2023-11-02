
@interface PKPayLaterPaymentSourceRow : NSObject <PKPayLaterCollectionViewRow> {
    bool  _disabled;
    UIImage * _image;
    NSString * _overrideSecondaryText;
    PKPayLaterPaymentSource * _paymentSource;
    bool  _selected;
    id /* block */  _selectionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *overrideSecondaryText;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (void)handleCellSelection;
- (unsigned long long)hash;
- (id)identifier;
- (id)image;
- (id)initWithPayLaterPaymentSource:(id)arg1 selectionHandler:(id /* block */)arg2;
- (bool)isDisabled;
- (bool)isEqual:(id)arg1;
- (bool)isSelected;
- (id)overrideSecondaryText;
- (void)setDisabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setOverrideSecondaryText:(id)arg1;
- (void)setSelected:(bool)arg1;
- (bool)shouldHighlightItem;

@end
