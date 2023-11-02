
@interface CLPlacemark : NSObject <INCodableAttributeRelationComparing, INJSONSerializable, NSCopying, NSSecureCoding, REDonatedActionIdentifierProviding> {
    CLPlacemarkInternal * _internal;
}

@property (nonatomic, readonly, copy) NSString *ISOcountryCode;
@property (nonatomic, readonly, copy) NSDictionary *addressDictionary;
@property (nonatomic, readonly, copy) NSString *administrativeArea;
@property (nonatomic, readonly, copy) NSArray *areasOfInterest;
@property (nonatomic, readonly, copy) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *inlandWater;
@property (nonatomic, readonly, copy) NSString *locality;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *ocean;
@property (nonatomic, readonly) CNPostalAddress *postalAddress;
@property (nonatomic, readonly, copy) NSString *postalCode;
@property (nonatomic, readonly, copy) CLRegion *region;
@property (nonatomic, readonly, copy) NSString *subAdministrativeArea;
@property (nonatomic, readonly, copy) NSString *subLocality;
@property (nonatomic, readonly, copy) NSString *subThoroughfare;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *thoroughfare;
@property (nonatomic, readonly, copy) NSTimeZone *timeZone;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (unsigned long long)_cLMapItemSourceFromRLMapItemSource:(unsigned long long)arg1;
+ (id)placemarkWithGEOMapItem:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)ISOcountryCode;
- (id)_geoMapItem;
- (id)_geoMapItemHandle;
- (id)_initWithGeoMapItem:(id)arg1;
- (id)_initWithRTMapItem:(id)arg1 location:(id)arg2;
- (id)addressDictionary;
- (id)administrativeArea;
- (id)areasOfInterest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchFormattedAddress:(id /* block */)arg1 queue:(id)arg2;
- (id)formattedAddressLines;
- (id)fullThoroughfare;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4 mapItemSource:(unsigned long long)arg5 geoMapItemHandle:(id)arg6 meCardAddress:(id)arg7;
- (id)initWithPlacemark:(id)arg1;
- (id)inlandWater;
- (id)locality;
- (id)location;
- (id)mecardAddress;
- (id)name;
- (id)ocean;
- (id)postalAddress;
- (id)postalCode;
- (id)region;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)timeZone;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
+ (id)placemarkWithLocation:(id)arg1 name:(id)arg2 postalAddress:(id)arg3;

- (bool)_intents_compareValue:(id)arg1 relation:(unsigned long long)arg2;
- (id)_intents_defaultReadableDescription;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)_intents_indexingRepresentation;
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;
- (id)initIntentPlacemarkWithLocation:(id)arg1 addressDictionary:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppPredictionFoundation.framework/AppPredictionFoundation

- (bool)atx_isFuzzyMatch:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport

- (id)acs_formattedNameOrStreetAddress;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

+ (id)fromSchema:(id)arg1;

- (id)schema;

// Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait

- (double)pp_addressSpecificity;
- (id)pp_featureNames;
- (id)pp_featureValueForName:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals

- (long long)pp_specificityCompare:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)_px_dynamicLocationString;
- (id)px_subtitle;
- (id)px_title;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

@end
