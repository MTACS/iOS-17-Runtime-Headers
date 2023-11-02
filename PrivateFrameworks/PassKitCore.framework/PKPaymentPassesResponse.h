
@interface PKPaymentPassesResponse : PKPaymentWebServiceResponse {
    NSArray * _devicePassSerialNumbers;
    NSString * _lastUpdatedTag;
    NSArray * _passURLs;
}

@property (nonatomic, copy) NSArray *devicePassSerialNumbers;
@property (nonatomic, copy) NSString *lastUpdatedTag;
@property (nonatomic, copy) NSArray *passURLs;

- (void).cxx_destruct;
- (id)devicePassSerialNumbers;
- (id)initWithData:(id)arg1;
- (id)lastUpdatedTag;
- (id)passURLs;
- (void)setDevicePassSerialNumbers:(id)arg1;
- (void)setLastUpdatedTag:(id)arg1;
- (void)setPassURLs:(id)arg1;

@end
