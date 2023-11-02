
@interface PassKitCore.SEProvisionedPasses : NSObject <NSSecureCoding> {
    void cardIdentifier;
    void externalProvisioningMode;
    void isExpressModeSetupOptional;
    void moreInfoItemsForPass;
    void notificationSuppressionAssertion;
    void passUniqueIdentifiers;
    void passesForUniqueIdentifier;
    void suppressMakeDefaultOfferForPass;
}

@property (nonatomic, readonly) NSString *description;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)passLibraryDidChangeWithNotification:(id)arg1;

@end
