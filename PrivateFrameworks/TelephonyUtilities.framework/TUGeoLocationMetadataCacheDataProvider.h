
@interface TUGeoLocationMetadataCacheDataProvider : TUMetadataCacheDataProvider {
    PNRPhoneNumberResolver * _phoneNumberResolver;
}

@property (nonatomic, readonly) PNRPhoneNumberResolver *phoneNumberResolver;

- (void).cxx_destruct;
- (id)init;
- (id)locationForMetadataIdentifier:(id)arg1;
- (id)phoneNumberResolver;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;

@end
