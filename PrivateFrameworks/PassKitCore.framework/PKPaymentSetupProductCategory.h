
@interface PKPaymentSetupProductCategory : NSObject {
    unsigned long long  _capabilities;
    unsigned long long  _excludedContexts;
    NSString * _identifier;
    PKPaymentSetupProductImageAssetURLs * _imageAssetURLs;
    PKPaymentSetupProductImageAssets * _imageAssets;
    NSString * _localizedDisplayName;
    NSString * _localizedSearchBarDefaultText;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    NSSet * _productIdentifiers;
    NSSet * _regions;
}

@property (nonatomic) unsigned long long capabilities;
@property (nonatomic) unsigned long long excludedContexts;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) PKPaymentSetupProductImageAssetURLs *imageAssetURLs;
@property (nonatomic, retain) PKPaymentSetupProductImageAssets *imageAssets;
@property (nonatomic, copy) NSString *localizedDisplayName;
@property (nonatomic, readonly, copy) NSString *localizedSearchBarDefaultText;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSSet *productIdentifiers;
@property (nonatomic, copy) NSSet *regions;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void).cxx_destruct;
- (unsigned long long)capabilities;
- (id)description;
- (unsigned long long)excludedContexts;
- (id)identifier;
- (id)imageAssetURLs;
- (id)imageAssets;
- (id)initWithDictionary:(id)arg1;
- (id)localizedDisplayName;
- (id)localizedSearchBarDefaultText;
- (id)localizedSubtitleWithIsBridge:(bool)arg1;
- (id)localizedTitle;
- (bool)needsProducts;
- (id)productIdentifiers;
- (id)regions;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setExcludedContexts:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageAssetURLs:(id)arg1;
- (void)setImageAssets:(id)arg1;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setProductIdentifiers:(id)arg1;
- (void)setRegions:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)logoCachedImage:(id /* block */)arg1;

@end
