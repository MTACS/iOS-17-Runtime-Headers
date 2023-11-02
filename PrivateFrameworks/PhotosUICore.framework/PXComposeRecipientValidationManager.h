
@interface PXComposeRecipientValidationManager : NSObject {
    PXIDSAddressQueryController * _addressQueryController;
    NSMutableDictionary * _composeRecipientsToQuery;
    PXComposeRecipientDataSource * _dataSource;
    <PXComposeRecipientValidationManagerDelegate> * _delegate;
    NSMutableDictionary * _queryAddressesToComposeRecipientQuery;
}

@property (nonatomic, readonly) PXComposeRecipientDataSource *dataSource;
@property (nonatomic) <PXComposeRecipientValidationManagerDelegate> *delegate;

+ (id)new;

- (void).cxx_destruct;
- (void)_handleAddressQueryResults:(id)arg1 error:(id)arg2;
- (void)_requestValidationForComposeRecipientsAtIndexes:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)setDelegate:(id)arg1;
- (long long)validationTypeForComposeRecipient:(id)arg1;

@end
