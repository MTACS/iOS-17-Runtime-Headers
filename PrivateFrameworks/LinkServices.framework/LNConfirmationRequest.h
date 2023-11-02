
@interface LNConfirmationRequest : NSObject <NSSecureCoding> {
    id /* block */  _completionHandler;
    LNDialog * _dialog;
    NSUUID * _identifier;
    NSString * _parameterName;
    LNValue * _value;
    LNViewSnippet * _viewSnippet;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) LNDialog *dialog;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSString *parameterName;
@property (nonatomic, readonly) LNValue *value;
@property (nonatomic, readonly, copy) LNViewSnippet *viewSnippet;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)dialog;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parameterName:(id)arg2 value:(id)arg3 dialog:(id)arg4 viewSnippet:(id)arg5;
- (id)parameterName;
- (void)respondWithConfirmation:(bool)arg1;
- (void)respondWithError:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)value;
- (id)viewSnippet;

@end
