
@interface EMListUnsubscribeMailtoValues : NSObject <NSSecureCoding> {
    <EDReceivingAccount> * _account;
    NSString * _accountIdentifier;
    NSString * _address;
    NSString * _body;
    NSString * _subject;
}

@property (nonatomic, readonly) <EDReceivingAccount> *account;
@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSString *subject;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)account;
- (id)address;
- (id)body;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAddresss:(id)arg1 subject:(id)arg2 body:(id)arg3 account:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)subject;

@end
