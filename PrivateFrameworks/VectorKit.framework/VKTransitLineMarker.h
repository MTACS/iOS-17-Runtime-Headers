
@interface VKTransitLineMarker : NSObject <GEOTransitArtworkDataSource, GEOTransitShieldDataSource, MKTransitLineMarker> {
    GEOMapItemIdentifier * _identifier;
    NSString * _labelLocale;
    NSString * _labelText;
    struct { 
        float r; 
        float g; 
        float b; 
        float a; 
    }  _shieldColor;
    NSString * _shieldLocale;
    NSString * _shieldText;
    long long  _shieldType;
    void * _transitLinkID;
}

@property (nonatomic, readonly) NSString *accessibilityText;
@property (nonatomic, readonly) int artworkSourceType;
@property (nonatomic, readonly) int artworkUseType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long featureID;
@property (nonatomic, readonly) bool hasRoutingIncidentBadge;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitIconDataSource> *iconDataSource;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) NSString *labelLocale;
@property (nonatomic, readonly) NSString *labelText;
@property (nonatomic, readonly) struct { float x1; float x2; float x3; float x4; } shieldColor;
@property (nonatomic, readonly) NSString *shieldColorString;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *shieldDataSource;
@property (nonatomic, readonly) NSString *shieldLocale;
@property (nonatomic, readonly) NSString *shieldText;
@property (nonatomic, readonly) long long shieldType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOTransitTextDataSource> *textDataSource;
@property (nonatomic, readonly) void*transitLinkID;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

+ (id)markerWithFeature:(void*)arg1 transitLink:(const void*)arg2;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)featureID;
- (id)identifier;
- (id)initWithFeature:(void*)arg1 transitLink:(const void*)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)labelLocale;
- (id)labelText;
- (struct { float x1; float x2; float x3; float x4; })shieldColor;
- (id)shieldLocale;
- (id)shieldText;
- (long long)shieldType;
- (void*)transitLinkID;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)accessibilityText;
- (id)artwork;
- (int)artworkSourceType;
- (int)artworkUseType;
- (bool)hasRoutingIncidentBadge;
- (id)iconDataSource;
- (id)iconFallbackShieldDataSource;
- (id)mapItemIdentifier;
- (id)shieldColorString;
- (id)shieldDataSource;
- (id)textDataSource;

@end
