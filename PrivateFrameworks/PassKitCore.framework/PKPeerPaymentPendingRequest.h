
@interface PKPeerPaymentPendingRequest : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _actions;
    PKCurrencyAmount * _currencyAmount;
    NSDate * _expiryDate;
    NSDate * _lastDismissedDate;
    NSString * _memo;
    NSDate * _requestDate;
    NSString * _requestToken;
    NSString * _requesteeAddress;
    NSString * _requesterAddress;
    NSString * _sessionID;
    NSString * _status;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) PKCurrencyAmount *currencyAmount;
@property (nonatomic, retain) NSDate *expiryDate;
@property (nonatomic, retain) NSDate *lastDismissedDate;
@property (nonatomic, retain) NSString *memo;
@property (nonatomic, retain) NSDate *requestDate;
@property (nonatomic, retain) NSString *requestToken;
@property (nonatomic, retain) NSString *requesteeAddress;
@property (nonatomic, retain) NSString *requesterAddress;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic, retain) NSString *status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyAmount;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expiryDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestToken:(id)arg1 requesterAddress:(id)arg2 requesteeAddress:(id)arg3 currencyAmount:(id)arg4 memo:(id)arg5 sessionID:(id)arg6 requestDate:(id)arg7 expiryDate:(id)arg8 lastDismissedDate:(id)arg9 actions:(id)arg10 status:(id)arg11;
- (bool)isEqual:(id)arg1;
- (id)lastDismissedDate;
- (id)memo;
- (id)requestDate;
- (id)requestToken;
- (id)requesteeAddress;
- (id)requesterAddress;
- (id)sessionID;
- (void)setActions:(id)arg1;
- (void)setCurrencyAmount:(id)arg1;
- (void)setExpiryDate:(id)arg1;
- (void)setLastDismissedDate:(id)arg1;
- (void)setMemo:(id)arg1;
- (void)setRequestDate:(id)arg1;
- (void)setRequestToken:(id)arg1;
- (void)setRequesteeAddress:(id)arg1;
- (void)setRequesterAddress:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
