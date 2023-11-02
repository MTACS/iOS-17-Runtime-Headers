
@interface MKTransitArtwork : NSObject <GEOTransitArtworkDataSource> {
    NSString * _accessibilityText;
    int  _artworkSourceType;
    int  _artworkUseType;
    bool  _hasRoutingIncidentBadge;
    <GEOTransitIconDataSource> * _iconDataSource;
    <GEOTransitShieldDataSource> * _iconFallbackShieldDataSource;
    <GEOTransitShieldDataSource> * _shieldDataSource;
    <GEOTransitTextDataSource> * _textDataSource;
}

@property (nonatomic, readonly) NSString *accessibilityText;
@property (nonatomic, readonly) int artworkSourceType;
@property (nonatomic, readonly) int artworkUseType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRoutingIncidentBadge;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOTransitIconDataSource> *iconDataSource;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *iconFallbackShieldDataSource;
@property (nonatomic, readonly) <GEOTransitShieldDataSource> *shieldDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOTransitTextDataSource> *textDataSource;

+ (id)artworkWithIcon:(id)arg1 accessibilityText:(id)arg2;
+ (id)artworkWithShield:(id)arg1 accessibilityText:(id)arg2;
+ (id)artworkWithText:(id)arg1;

- (void).cxx_destruct;
- (id)accessibilityText;
- (int)artworkSourceType;
- (int)artworkUseType;
- (bool)hasRoutingIncidentBadge;
- (id)iconDataSource;
- (id)iconFallbackShieldDataSource;
- (id)initWithIcon:(id)arg1 accessibilityText:(id)arg2;
- (id)initWithIcon:(id)arg1 fallbackShield:(id)arg2 accessibilityText:(id)arg3;
- (id)initWithShield:(id)arg1 accessibilityText:(id)arg2;
- (id)initWithText:(id)arg1;
- (id)shieldDataSource;
- (id)textDataSource;

@end
