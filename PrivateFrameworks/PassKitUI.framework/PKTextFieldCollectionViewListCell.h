
@interface PKTextFieldCollectionViewListCell : UICollectionViewListCell <PKListTextFieldContentViewDelegate> {
    <PKTextFieldCollectionViewListCellDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <PKTextFieldCollectionViewListCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_textFieldContentView;
- (void)beginEditing;
- (id)delegate;
- (void)endEditing;
- (void)prepareForReuse;
- (void)resetTextFieldTextFromLabel;
- (void)setDelegate:(id)arg1;
- (void)setToolbarItems:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1 forContentView:(id)arg2;
- (void)textFieldDidChangeSelection:(id)arg1 forContentView:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 forContentView:(id)arg2;
- (bool)textFieldShouldReturn:(id)arg1 forContentView:(id)arg2;
- (id)textFieldText;
- (void)updateConfigurationUsingState:(id)arg1;

@end
