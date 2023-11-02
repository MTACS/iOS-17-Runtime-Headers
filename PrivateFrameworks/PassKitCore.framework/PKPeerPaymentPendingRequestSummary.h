
@interface PKPeerPaymentPendingRequestSummary : NSObject {
    NSArray * _actions;
    NSDate * _expiryDate;
    NSString * _requestToken;
    NSString * _status;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (nonatomic, readonly, copy) NSDate *expiryDate;
@property (nonatomic, readonly, copy) NSString *requestToken;
@property (nonatomic, readonly, copy) NSString *status;

- (void).cxx_destruct;
- (id)actions;
- (id)expiryDate;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)requestToken;
- (id)status;

@end
