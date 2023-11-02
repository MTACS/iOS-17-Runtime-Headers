
@interface PKAuxiliaryItemMerchantLookupSource : NSObject <PKMerchantLookupRequestSource> {
    PKPassAuxiliaryPassInformationItem * _item;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithAuxiliaryItem:(id)arg1;
- (bool)isRefund;
- (bool)isSettlement;
- (id)mapsMerchantLookupRequest;
- (id)mapsURL;
- (long long)type;

@end
