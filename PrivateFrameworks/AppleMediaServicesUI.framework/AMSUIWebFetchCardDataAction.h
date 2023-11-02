
@interface AMSUIWebFetchCardDataAction : AMSUIWebAction {
    NSString * _merchantID;
    NSString * _storeFrontCountryCode;
}

@property (nonatomic, retain) NSString *merchantID;
@property (nonatomic, retain) NSString *storeFrontCountryCode;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)merchantID;
- (id)runAction;
- (void)setMerchantID:(id)arg1;
- (void)setStoreFrontCountryCode:(id)arg1;
- (id)storeFrontCountryCode;

@end
