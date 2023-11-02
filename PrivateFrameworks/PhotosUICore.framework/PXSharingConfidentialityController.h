
@interface PXSharingConfidentialityController : NSObject

+ (id)confidentialFeatureWarningMessage;
+ (bool)confidentialWarningRequiredForAsset:(id)arg1;
+ (bool)confidentialWarningRequiredForAssetReferences:(id)arg1;
+ (bool)confidentialWarningRequiredForAssets:(id)arg1;
+ (bool)confidentialWarningRequiredForShareableSelection:(id)arg1;
+ (id)confidentialityAlertWithActions:(id)arg1;
+ (id)confidentialityAlertWithConfirmAction:(id /* block */)arg1;
+ (id)confidentialityAlertWithConfirmAction:(id /* block */)arg1 abortAction:(id /* block */)arg2;
+ (bool)confidentialityCheckRequired;
+ (id)confidentialityWarningMessage;
+ (id)confidentialityWarningTitle;

@end
