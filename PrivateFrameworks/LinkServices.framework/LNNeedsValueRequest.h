
@interface LNNeedsValueRequest : NSObject <NSSecureCoding> {
    id /* block */  _completionHandler;
    LNDialog * _dialog;
    NSUUID * _identifier;
    NSString * _parameterName;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) LNDialog *dialog;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSString *parameterName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)dialog;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parameterName:(id)arg2 dialog:(id)arg3;
- (id)parameterName;
- (void)respondWithError:(id)arg1;
- (void)respondWithValue:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
