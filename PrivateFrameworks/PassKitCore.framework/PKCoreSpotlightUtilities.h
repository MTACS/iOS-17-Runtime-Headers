
@interface PKCoreSpotlightUtilities : NSObject

+ (struct CGSize { double x1; double x2; })_thumbnailImageSizeForSourceImageSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)passUniqueIdentifierFromCardInformationSpotlightIdentifier:(id)arg1;
+ (id)passUniqueIdentifierFromSpotlightIdentifier:(id)arg1;
+ (void)searchableItemForCardNumberFromPass:(id)arg1 completion:(id /* block */)arg2;
+ (void)searchableItemForPass:(id)arg1 completion:(id /* block */)arg2;
+ (void)searchableItemForPass:(id)arg1 passKitServicesXPCService:(id)arg2 completion:(id /* block */)arg3;
+ (void)searchableItemForTransaction:(id)arg1 passUniqueIdentifier:(id)arg2 regions:(id)arg3 tags:(id)arg4 keywords:(id)arg5 imageGenerator:(id)arg6 contactResolver:(id)arg7 completion:(id /* block */)arg8;
+ (id)spotlightIdentifierForCardInformationUniqueIdentifier:(id)arg1;
+ (id)spotlightIdentifierForPassUniqueIdentifier:(id)arg1;
+ (id)spotlightIdentifierForTransactionIdentifier:(id)arg1;
+ (id)transactionIdentifierFromSpotlightIdentifier:(id)arg1;

@end
