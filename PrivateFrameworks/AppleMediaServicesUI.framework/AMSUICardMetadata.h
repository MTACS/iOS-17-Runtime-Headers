
@interface AMSUICardMetadata : NSObject

+ (id)_cardArtworkForPaymentPass:(id)arg1 width:(double)arg2;
+ (id)_passesForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
+ (id)appleCardIcon;
+ (id)appleCardIconString;
+ (id)metadataForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 cardArtworkSize:(id)arg3;
+ (void)metadataForPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 cardArtworkSize:(id)arg3 completionHandler:(id /* block */)arg4;

@end
