
@interface PKPaymentSetupProductModel : NSObject {
    NSMutableArray * _allSections;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    NSMutableDictionary * _paymentSetupProducts;
}

@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void).cxx_destruct;
- (id)_paymentSetupProductsWithPartners:(id)arg1 products:(id)arg2 existingPaymentSetupProducts:(id)arg3;
- (void)_updatePaymentSetupProduct:(id)arg1 displayName:(id)arg2 localizedDescription:(id)arg3 partnerDictionary:(id)arg4 productIdentifier:(id)arg5 paymentOptions:(id)arg6 termsURL:(id)arg7 provisioningMethods:(id)arg8 readerModeMetadata:(id)arg9 requiredFields:(id)arg10 imageAssets:(id)arg11 minimumOSVersion:(id)arg12 region:(id)arg13 regionData:(id)arg14 hsa2Requirement:(id)arg15 suppressPendingPurchases:(id)arg16 supportedTransitNetworkIdentifiers:(id)arg17 onboardingItems:(id)arg18 actionBaseURL:(id)arg19 productState:(id)arg20 minimumProductAge:(id)arg21 maximumProductAge:(id)arg22 minimumTargetUserSupportedAge:(id)arg23 associatedStoreIdentifiers:(id)arg24 appLaunchURL:(id)arg25 regionIdentifier:(id)arg26 type:(id)arg27 localizedNotificationTitle:(id)arg28 localizedNotificationMessage:(id)arg29 discoveryCardIdentifier:(id)arg30 clientInfo:(id)arg31 searchTerms:(id)arg32 featureIdentifier:(id)arg33;
- (void)addCarKeyCategory;
- (void)addManualEntrySection:(id /* block */)arg1;
- (id)allSections;
- (id)allSetupProducts;
- (id)availableProductsForFeatureIdentifier:(unsigned long long)arg1;
- (id)availableProductsForProductIdentifiers:(id)arg1;
- (id)description;
- (id)filteredPaymentSetupProductModel:(id)arg1 mobileCarrierRegion:(id)arg2 deviceRegion:(id)arg3 cardOnFiles:(id)arg4;
- (id)init;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id)productForProductIdentifier:(id)arg1;
- (id)productsForFeatureIdentifier:(unsigned long long)arg1;
- (id)productsForProductIdentifiers:(id)arg1;
- (void)removeCarKeyCategory;
- (void)removePaymentSetupProducts:(id)arg1;
- (void)setAllSections:(id)arg1;
- (void)setPaymentSetupProducts:(id)arg1;
- (id)setupProductsOfType:(unsigned long long)arg1;
- (void)updatePaymentSetupProducts:(id)arg1;
- (void)updateWithPaymentSetupProductsResponse:(id)arg1 productsFilter:(id /* block */)arg2 sectionsFilter:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (bool)_localCredentials:(id)arg1 containProduct:(id)arg2;
- (id)filteredPaymentSetupProductModelWithLocalCredentials:(id)arg1 setupContext:(long long)arg2 webService:(id)arg3 mobileCarrierRegion:(id)arg4 deviceRegion:(id)arg5;

@end
