
@interface LNActionConfirmationRequest : NSObject <NSSecureCoding> {
    id /* block */  _completionHandler;
    NSUUID * _identifier;
    LNSuccessResult * _result;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly, copy) LNSuccessResult *result;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 result:(id)arg2;
- (void)respondWithConfirmation:(bool)arg1;
- (void)respondWithError:(id)arg1;
- (id)result;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
