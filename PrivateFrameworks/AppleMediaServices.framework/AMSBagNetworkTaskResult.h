
@interface AMSBagNetworkTaskResult : NSObject {
    NSString * _accountIdentifier;
    NSDictionary * _data;
    NSDate * _expirationDate;
    NSString * _loadedBagIdentifier;
    NSString * _loadedBagPartialIdentifier;
    NSString * _storefront;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSDictionary *data;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) bool expired;
@property (nonatomic, readonly) NSString *loadedBagIdentifier;
@property (nonatomic, readonly) NSString *loadedBagPartialIdentifier;
@property (nonatomic, readonly) NSString *storefront;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)data;
- (id)expirationDate;
- (bool)expired;
- (id)initWithData:(id)arg1 expirationDate:(id)arg2 loadedBagIdentifier:(id)arg3 loadedBagPartialIdentifier:(id)arg4 storefront:(id)arg5 accountIdentifier:(id)arg6;
- (id)loadedBagIdentifier;
- (id)loadedBagPartialIdentifier;
- (id)storefront;

@end
