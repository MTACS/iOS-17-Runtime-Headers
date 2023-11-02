
@interface SKReceiptRefreshRequest : SKRequest {
    NSDictionary * _properties;
}

@property (nonatomic, readonly) NSDictionary *receiptProperties;

- (void).cxx_destruct;
- (void)_handleReply:(id)arg1;
- (void)_requestCompletedWithError:(id)arg1;
- (void)_start;
- (bool)_wantsExpired;
- (bool)_wantsRevoked;
- (bool)_wantsVPP;
- (id)initWithReceiptProperties:(id)arg1;
- (id)receiptProperties;

@end
