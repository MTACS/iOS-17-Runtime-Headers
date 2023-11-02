
@interface PKSelectedItemActionItem : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _amount;
    NSString * _currency;
    NSString * _identifier;
    NSDate * _newExpirationDate;
    NSDictionary * _serviceProviderData;
    bool  _serviceProviderDataRequiresAppletData;
    bool  _serviceProviderDataRequiresLocalBalance;
    PKPassLibrary * _sharedLibrary;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSDecimalNumber *amount;
@property (nonatomic, readonly, copy) NSString *currency;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDate *newExpirationDate;
@property (nonatomic, readonly, copy) NSDictionary *serviceProviderData;
@property (nonatomic, readonly) bool serviceProviderDataRequiresAppletData;
@property (nonatomic, readonly) bool serviceProviderDataRequiresLocalBalance;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_processLocalizableStrings:(id /* block */)arg1;
- (id)amount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currency;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)newExpirationDate;
- (id)serviceProviderData;
- (bool)serviceProviderDataRequiresAppletData;
- (bool)serviceProviderDataRequiresLocalBalance;
- (void)serviceProviderDataWithPass:(id)arg1 currentLocalBalance:(id)arg2 completion:(id /* block */)arg3;
- (id)title;

@end
