
@interface MKLocalSearchRequest : NSObject <NSCopying> {
    bool  _allowPhoneNumberLookupUsingCellular;
    NSString * _canonicalSearchString;
    NSString * _contactsDataString;
    CLLocation * _deviceLocation;
    _MKLocalSearchExternalTransitLookupParameters * _externalTransitLookupParameters;
    <GEOCompletionItem> * _geoCompletionItem;
    bool  _hasRegion;
    bool  _hasSentFeedbackForCompletion;
    _MKLocalSearchMerchantParameters * _merchantParameters;
    NSArray * _muids;
    NSString * _naturalLanguageQuery;
    NSArray * _phoneNumbers;
    MKPointOfInterestFilter * _pointOfInterestFilter;
    struct { 
        struct CLLocationCoordinate2D { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _region;
    int  _resultProviderID;
    unsigned long long  _resultTypes;
}

@property (nonatomic, readonly) bool _hasRegion;
@property (getter=_allowPhoneNumberLookupUsingCellular, setter=_setAllowPhoneNumberLookupUsingCellular:, nonatomic) bool allowPhoneNumberLookupUsingCellular;
@property (getter=_canonicalSearchString, setter=_setCanonicalSearchString:, nonatomic, retain) NSString *canonicalSearchString;
@property (getter=_contactsDataString, setter=_setContactsDataString:, nonatomic, retain) NSString *contactsDataString;
@property (getter=_deviceLocation, setter=_setDeviceLocation:, nonatomic, retain) CLLocation *deviceLocation;
@property (getter=_externalTransitLookupParameters, setter=_setExternalTransitLookupParameters:, nonatomic, retain) _MKLocalSearchExternalTransitLookupParameters *externalTransitLookupParameters;
@property (nonatomic, readonly) <GEOCompletionItem> *geoCompletionItem;
@property (nonatomic) bool hasSentFeedbackForCompletion;
@property (getter=_merchantParameters, setter=_setMerchantParameters:, nonatomic, retain) _MKLocalSearchMerchantParameters *merchantParameters;
@property (getter=_muids, setter=_setMuids:, nonatomic, retain) NSArray *muids;
@property (nonatomic, copy) NSString *naturalLanguageQuery;
@property (getter=_phoneNumbers, setter=_setPhoneNumbers:, nonatomic, retain) NSArray *phoneNumbers;
@property (nonatomic, copy) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } region;
@property (getter=_resultProviderID, setter=_setResultProviderID:, nonatomic) int resultProviderID;
@property (nonatomic) unsigned long long resultTypes;

+ (id)searchRequestWithCompletion:(id)arg1;

- (void).cxx_destruct;
- (bool)_allowPhoneNumberLookupUsingCellular;
- (id)_canonicalSearchString;
- (id)_contactsDataString;
- (id)_deviceLocation;
- (id)_dictionaryRepresentation;
- (id)_externalTransitLookupParameters;
- (bool)_hasRegion;
- (id)_merchantParameters;
- (id)_muids;
- (id)_phoneNumbers;
- (int)_resultProviderID;
- (void)_setAllowPhoneNumberLookupUsingCellular:(bool)arg1;
- (void)_setCanonicalSearchString:(id)arg1;
- (void)_setContactsDataString:(id)arg1;
- (void)_setDeviceLocation:(id)arg1;
- (void)_setExternalTransitLookupParameters:(id)arg1;
- (void)_setMerchantParameters:(id)arg1;
- (void)_setMuids:(id)arg1;
- (void)_setPhoneNumbers:(id)arg1;
- (void)_setResultProviderID:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)geoCompletionItem;
- (bool)hasSentFeedbackForCompletion;
- (id)init;
- (id)initWithCompletion:(id)arg1;
- (id)initWithMapsURL:(id)arg1;
- (id)initWithNaturalLanguageQuery:(id)arg1;
- (id)initWithNaturalLanguageQuery:(id)arg1 region:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)naturalLanguageQuery;
- (id)pointOfInterestFilter;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (unsigned long long)resultTypes;
- (void)setHasSentFeedbackForCompletion:(bool)arg1;
- (void)setNaturalLanguageQuery:(id)arg1;
- (void)setPointOfInterestFilter:(id)arg1;
- (void)setRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setResultTypes:(unsigned long long)arg1;

@end
