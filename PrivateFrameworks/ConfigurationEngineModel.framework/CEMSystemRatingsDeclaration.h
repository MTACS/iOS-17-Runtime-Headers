
@interface CEMSystemRatingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowExplicitContent;
    NSNumber * _payloadAllowShowingUndownloadedMovies;
    NSNumber * _payloadAllowShowingUndownloadedTV;
    NSNumber * _payloadRatingApps;
    NSNumber * _payloadRatingMovies;
    NSString * _payloadRatingRegion;
    NSNumber * _payloadRatingTVShows;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowExplicitContent;
@property (nonatomic, copy) NSNumber *payloadAllowShowingUndownloadedMovies;
@property (nonatomic, copy) NSNumber *payloadAllowShowingUndownloadedTV;
@property (nonatomic, copy) NSNumber *payloadRatingApps;
@property (nonatomic, copy) NSNumber *payloadRatingMovies;
@property (nonatomic, copy) NSString *payloadRatingRegion;
@property (nonatomic, copy) NSNumber *payloadRatingTVShows;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withRatingRegion:(id)arg2 withRatingApps:(id)arg3 withRatingMovies:(id)arg4 withRatingTVShows:(id)arg5 withAllowExplicitContent:(id)arg6 withAllowShowingUndownloadedTV:(id)arg7 withAllowShowingUndownloadedMovies:(id)arg8;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAllowExplicitContent;
- (id)payloadAllowShowingUndownloadedMovies;
- (id)payloadAllowShowingUndownloadedTV;
- (id)payloadRatingApps;
- (id)payloadRatingMovies;
- (id)payloadRatingRegion;
- (id)payloadRatingTVShows;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowExplicitContent:(id)arg1;
- (void)setPayloadAllowShowingUndownloadedMovies:(id)arg1;
- (void)setPayloadAllowShowingUndownloadedTV:(id)arg1;
- (void)setPayloadRatingApps:(id)arg1;
- (void)setPayloadRatingMovies:(id)arg1;
- (void)setPayloadRatingRegion:(id)arg1;
- (void)setPayloadRatingTVShows:(id)arg1;

@end
