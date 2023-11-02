
@interface PKPurchaseNewActionItem : NSObject <NSCopying, NSSecureCoding> {
    NSDecimalNumber * _amount;
    NSString * _currency;
    NSString * _identifier;
    NSDate * _newExpirationDate;
    NSMutableDictionary * _serviceProviderData;
    bool  _serviceProviderDataRequiresAppletData;
    PKPassLibrary * _sharedLibrary;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSDecimalNumber *amount;
@property (nonatomic, readonly, copy) NSString *currency;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSDate *newExpirationDate;
@property (nonatomic, readonly) bool serviceProviderDataRequiresAppletData;
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
- (bool)serviceProviderDataRequiresAppletData;
- (void)serviceProviderDataWithItemForPass:(id)arg1 completion:(id /* block */)arg2;
- (id)title;

@end
