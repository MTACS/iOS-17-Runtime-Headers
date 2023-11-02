
@interface GEOPlaceExternalActionLinkExtensionParams : NSObject <MUExtensionPlaceDataProviding> {
    NSMapTable * _attributionMap;
    GEOPDExtensionParams * _extensionParams;
}

@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (nonatomic, readonly) GEOAttributionApp *attributionApp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *externalItemId;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *vendorId;
@property (nonatomic, readonly) NSString *vendorIdentifier;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

- (void).cxx_destruct;
- (id)attributionApp;
- (id)externalItemId;
- (unsigned long long)featureType;
- (id)initWithExtensionParams:(id)arg1 attributionMap:(id)arg2;
- (id)vendorId;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (id)appBundleIdentifier;
- (id)vendorIdentifier;

@end
