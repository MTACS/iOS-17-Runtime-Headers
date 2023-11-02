
@interface PKACAccountChange : NSObject <NSSecureCoding> {
    bool  _accountManagedStateChanged;
    bool  _accountOrderChanged;
    bool  _accountStorefrontChanged;
    bool  _enablementOfUbiquityDataclassChanged;
    bool  _enablementOfWalletDataclassChanged;
    long long  _operation;
    long long  _type;
}

@property (nonatomic, readonly) bool accountManagedStateChanged;
@property (nonatomic, readonly) bool accountOrderChanged;
@property (nonatomic, readonly) bool accountStorefrontChanged;
@property (nonatomic, readonly) bool enablementOfRelevantDataclassesChanged;
@property (nonatomic, readonly) bool enablementOfUbiquityDataclassChanged;
@property (nonatomic, readonly) bool enablementOfWalletDataclassChanged;
@property (nonatomic, readonly) long long operation;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (long long)_operationTypeForChangeType:(int)arg1 newAccount:(id)arg2 oldAccount:(id)arg3;
- (bool)accountManagedStateChanged;
- (bool)accountOrderChanged;
- (bool)accountStorefrontChanged;
- (id)description;
- (bool)enablementOfRelevantDataclassesChanged;
- (bool)enablementOfUbiquityDataclassChanged;
- (bool)enablementOfWalletDataclassChanged;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChangeType:(int)arg1 newAccount:(id)arg2 oldAccount:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (long long)operation;
- (long long)type;

@end
