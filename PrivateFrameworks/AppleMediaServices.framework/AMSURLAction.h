
@interface AMSURLAction : NSObject <NSSecureCoding> {
    long long  _actionType;
    AMSAuthenticateResult * _authenticateResult;
    AMSDialogResult * _dialogResult;
    NSError * _error;
    NSString * _reason;
    NSURL * _redirectURL;
    NSString * _retryIdentifier;
    NSData * _updatedBody;
    NSString * _updatedBuyParams;
    NSDictionary * _updatedHeaders;
    NSString * _updatedMethod;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, retain) AMSAuthenticateResult *authenticateResult;
@property (nonatomic, retain) AMSDialogResult *dialogResult;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, readonly) NSURL *redirectURL;
@property (nonatomic, retain) NSString *retryIdentifier;
@property (nonatomic, retain) NSData *updatedBody;
@property (nonatomic, retain) NSString *updatedBuyParams;
@property (nonatomic, retain) NSDictionary *updatedHeaders;
@property (nonatomic, retain) NSString *updatedMethod;

+ (id)actionWithError:(id)arg1;
+ (id)proceedAction;
+ (id)redirectActionWithURL:(id)arg1;
+ (id)retryAction;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)actionType;
- (id)authenticateResult;
- (id)description;
- (id)dialogResult;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 error:(id)arg2 reason:(id)arg3 redirectURL:(id)arg4;
- (id)reason;
- (id)redirectURL;
- (id)retryIdentifier;
- (void)setAuthenticateResult:(id)arg1;
- (void)setDialogResult:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setRetryIdentifier:(id)arg1;
- (void)setUpdatedBody:(id)arg1;
- (void)setUpdatedBuyParams:(id)arg1;
- (void)setUpdatedHeaders:(id)arg1;
- (void)setUpdatedMethod:(id)arg1;
- (id)updatedBody;
- (id)updatedBuyParams;
- (id)updatedHeaders;
- (id)updatedMethod;

@end
