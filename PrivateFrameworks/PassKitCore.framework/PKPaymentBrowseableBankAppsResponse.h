
@interface PKPaymentBrowseableBankAppsResponse : PKPaymentWebServiceResponse {
    NSArray * _browseableBankApps;
}

@property (nonatomic, readonly, copy) NSArray *browseableBankApps;

- (void).cxx_destruct;
- (id)browseableBankApps;
- (id)initWithData:(id)arg1;

@end
