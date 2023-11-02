
@interface WBSCreditCardDataController : NSObject {
    NSCache * _artworkCache;
    NSMapTable * _creditCardDataKeychainReferences;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isQueueOfVirtualCardsToFetchDetailsForBeingProcessed;
    NSMutableArray * _queueOfVirtualCardsToFetchDetailsFor;
    PKVirtualCardManager * _virtualCardManager;
    PKSafariCardNotificationManager * _virtualCardNotificationManager;
}

@property (nonatomic, retain) NSCache *artworkCache;
@property (nonatomic, readonly) NSArray *creditCardData;
@property (nonatomic, readonly, copy) NSString *messageForUnavailableVirtualCardAlert;
@property (nonatomic, readonly, copy) NSString *titleForUnavailableVirtualCardAlert;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id /* block */)creditCardComparatorForSortingInSettings;
+ (bool)hasCreditCardData;

- (void).cxx_destruct;
- (id)_creditCardData;
- (void)_creditCardDataDidChange;
- (id)_deduplicatedVirtualCardDataArray:(id)arg1 andCreditCardDataArray:(id)arg2;
- (id)_neverSavedCreditCardSuffixFromCard:(id)arg1;
- (id)_neverSavedCreditCardSuffixFromCardNumber:(id)arg1;
- (void)_removeNeverSaveCreditCardData:(id)arg1;
- (bool)_shouldOfferVirtualCards;
- (void)_sortCreditCardDataArray:(id)arg1;
- (id)_uniqueCardNameForCardName:(id)arg1;
- (id)_virtualCardDataFromPKVirtualCards:(id)arg1;
- (id)artworkCache;
- (bool)authenticationRequiredForVirtualCard:(id)arg1;
- (void)clearCreditCardData;
- (id)creditCardData;
- (id)defaultNameForCardOfType:(unsigned long long)arg1 cardholderName:(id)arg2;
- (id)existingCardWithNumber:(id)arg1;
- (id)fieldsToObscureWhenFillingCreditCard:(id)arg1 formMetadata:(id)arg2;
- (id)fieldsToObscureWhenFillingSingleCreditCardData:(id)arg1 formFieldValues:(id)arg2;
- (void)getCardDetailsForVirtualCards:(id)arg1 externalizedContext:(id)arg2 blockToUpdateCardDetails:(id /* block */)arg3;
- (void)getCreditCardDataToFill:(id)arg1 host:(id)arg2 externalizedContext:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getCreditCardDataWithCompletionHandler:(id /* block */)arg1;
- (void)getVirtualCardCredentialsWithExternalizedContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getVirtualCardCredentialsWithExternalizedContext:(id)arg1 shouldIncludeVPANCards:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)getVirtualCardsWithCompletionHandler:(id /* block */)arg1;
- (bool)hasUsedNonVirtualCard;
- (id)init;
- (bool)isCreditCardDataSaved:(id)arg1;
- (void)isVirtualCard:(id)arg1 lastFilledCardData:(id)arg2 completion:(id /* block */)arg3;
- (void)markCreditCardDataAsMostRecentlyUsed:(id)arg1;
- (id)messageForUnavailableVirtualCardAlert;
- (void)neverSaveCreditCardData:(id)arg1;
- (void)processQueueOfVirtualCardsToFetchDetailsForWithExternalizedContext:(id)arg1 blockToUpdateCardDetails:(id /* block */)arg2;
- (void)removeCreditCardData:(id)arg1;
- (void)replaceCreditCardData:(id)arg1 withCard:(id)arg2;
- (id)savableCreditCardDataInForm:(id)arg1;
- (void)saveCreditCardData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveCreditCardDataIfAllowed:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)sendCardholderNameEnteredInFormToWalletIfNecessary:(id)arg1 lastFilledCardData:(id)arg2;
- (void)setArtworkCache:(id)arg1;
- (void)setHasUsedNonVirtualCard;
- (bool)shouldAddCardWithNumber:(id)arg1;
- (bool)shouldNeverSaveCardWithNumber:(id)arg1;
- (void)tellWalletThatExistingCardWasFilledInForm:(id)arg1 lastFilledCardData:(id)arg2;
- (void)tellWalletThatNewCardWasSaved:(id)arg1;
- (id)titleForUnavailableVirtualCardAlert;
- (id)urlForVirtualCard:(id)arg1;
- (id)urlToListOfCardsInWallet;
- (unsigned long long)virtualCardFieldsToRequest;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

+ (id)creditCardDataController;

@end
