
@interface DADeliveryAccount : DeliveryAccount {
    DAMailAccount * _DAMailAccount;
}

+ (id)accountTypeIdentifier;

- (void).cxx_destruct;
- (Class)deliveryClass;
- (id)initWithDAMailAccount:(id)arg1;
- (id)mailAccountIfAvailable;
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(bool)arg3;
- (id)newDeliveryWithMessage:(id)arg1;

@end
