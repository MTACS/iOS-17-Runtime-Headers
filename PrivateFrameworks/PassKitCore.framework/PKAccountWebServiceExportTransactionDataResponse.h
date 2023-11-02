
@interface PKAccountWebServiceExportTransactionDataResponse : PKAccountWebServiceResponse {
    PKAccountExportedTransactionInfo * _exportedTransactionInfo;
}

@property (nonatomic, readonly, copy) PKAccountExportedTransactionInfo *exportedTransactionInfo;

- (void).cxx_destruct;
- (id)exportedTransactionInfo;
- (id)initWithData:(id)arg1 account:(id)arg2 request:(id)arg3;

@end
