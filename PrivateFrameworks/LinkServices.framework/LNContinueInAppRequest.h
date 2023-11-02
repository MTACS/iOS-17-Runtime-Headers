
@interface LNContinueInAppRequest : NSObject <NSSecureCoding> {
    id /* block */  _completionHandler;
    LNDialog * _dialog;
    NSUUID * _identifier;
    bool  _requestConfirmation;
    bool  _throwing;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) LNDialog *dialog;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) bool requestConfirmation;
@property (getter=isThrowing, nonatomic, readonly) bool throwing;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)dialog;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dialog:(id)arg2 throwing:(bool)arg3 requestConfirmation:(bool)arg4;
- (bool)isThrowing;
- (bool)requestConfirmation;
- (void)respondWithError:(id)arg1;
- (void)respondWithSuccess;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
