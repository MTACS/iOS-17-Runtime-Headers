
@interface PKAppleAccountState : NSObject <NSSecureCoding> {
    NSString * _identifier;
    bool  _isManaged;
    bool  _isPrimary;
    bool  _isUbiquityDataclassEnabled;
    bool  _isWalletDataclassEnabled;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isManaged;
@property (nonatomic, readonly) bool isPrimary;
@property (nonatomic, readonly) bool isUbiquityDataclassEnabled;
@property (nonatomic, readonly) bool isWalletDataclassEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithAccount:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isManaged;
- (bool)isPrimary;
- (bool)isUbiquityDataclassEnabled;
- (bool)isWalletDataclassEnabled;

@end
