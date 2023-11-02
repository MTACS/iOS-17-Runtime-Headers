
@interface LNDisambiguationRequest : NSObject <NSSecureCoding> {
    id /* block */  _completionHandler;
    LNDialog * _dialog;
    NSUUID * _identifier;
    NSString * _parameterName;
    NSArray * _providedValues;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) LNDialog *dialog;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *parameterName;
@property (nonatomic, readonly) NSArray *providedValues;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)dialog;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parameterName:(id)arg2 providedValues:(id)arg3 dialog:(id)arg4;
- (id)items;
- (id)parameterName;
- (id)providedValues;
- (void)respondWithError:(id)arg1;
- (void)respondWithSelectedIndex:(long long)arg1;
- (void)respondWithSelectedItemIndex:(long long)arg1;
- (void)respondWithValue:(id)arg1;
- (void)responseWithSelectedIndex:(id)arg1 value:(id)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
