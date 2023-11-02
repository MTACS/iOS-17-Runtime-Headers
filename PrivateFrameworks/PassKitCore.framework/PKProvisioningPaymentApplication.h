
@interface PKProvisioningPaymentApplication : NSObject {
    NSString * _appletTypeIdentifier;
    NSString * _applicationIdentifier;
    unsigned long long  _paymentType;
}

@property (nonatomic, readonly, copy) NSString *appletTypeIdentifier;
@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly) unsigned long long paymentType;

- (void).cxx_destruct;
- (id)appletTypeIdentifier;
- (id)applicationIdentifier;
- (id)initWithAppletTypeIdentifier:(id)arg1 paymentType:(unsigned long long)arg2;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)paymentType;

@end
