
@interface PKMerchantToken : NSObject {
    NSString * _appleMerchantId;
    bool  _isDeferredPayment;
    NSURL * _merchantIconURL;
    NSString * _merchantName;
    NSString * _merchantTokenId;
    NSURL * _merchantTokenManagementURL;
    NSString * _tokenCategory;
}

@property (nonatomic, readonly, copy) NSString *appleMerchantId;
@property (nonatomic, readonly) bool isAMPPaymentToken;
@property (nonatomic, readonly) bool isAppleCashPaymentToken;
@property (nonatomic, readonly) bool isDeferredPayment;
@property (nonatomic, readonly) NSURL *merchantIconURL;
@property (nonatomic, readonly, copy) NSString *merchantName;
@property (nonatomic, readonly, copy) NSString *merchantTokenId;
@property (nonatomic, readonly) NSURL *merchantTokenManagementURL;
@property (nonatomic, readonly, copy) NSString *tokenCategory;

- (void).cxx_destruct;
- (id)appleMerchantId;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMerchantTokenId:(id)arg1 appleMerchantId:(id)arg2 merchantName:(id)arg3 merchantIconURL:(id)arg4 merchantTokenManagementURL:(id)arg5 tokenCategory:(id)arg6 isDeferredPayment:(bool)arg7;
- (bool)isAMPPaymentToken;
- (bool)isAppleCashPaymentToken;
- (bool)isDeferredPayment;
- (id)merchantIconURL;
- (id)merchantName;
- (id)merchantTokenId;
- (id)merchantTokenManagementURL;
- (id)tokenCategory;

@end
