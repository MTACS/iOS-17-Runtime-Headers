
@interface PKApplyRequiredFieldRow : NSObject <PKApplyCollectionViewRow> {
    <PKTextFieldCollectionViewListCellDelegate> * _cellDelegate;
    PKPaymentSetupField * _field;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (id)identifier;
- (id)initWithField:(id)arg1 cellDelegate:(id)arg2;

@end
