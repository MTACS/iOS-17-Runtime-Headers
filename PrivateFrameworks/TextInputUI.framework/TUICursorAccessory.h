
@interface TUICursorAccessory : NSObject <NSSecureCoding> {
    id /* block */  _actionHandler;
    NSString * _identifier;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, readonly) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)actionHandler;
- (id)additionalComponents;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 actionHandler:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;

@end
