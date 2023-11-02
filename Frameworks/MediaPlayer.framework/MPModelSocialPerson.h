
@interface MPModelSocialPerson : MPModelPerson

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *biography;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic) long long pendingRequestsCount;
@property (getter=isPrivate, nonatomic) bool privatePerson;
@property (nonatomic, copy) NSString *uncensoredName;
@property (getter=isVerified, nonatomic) bool verified;

+ (void)__MPModelPropertySocialPersonArtwork__MAPPING_MISSING__;
+ (void)__MPModelPropertySocialPersonBiography__MAPPING_MISSING__;
+ (void)__MPModelPropertySocialPersonHandle__MAPPING_MISSING__;
+ (void)__MPModelPropertySocialPersonIsPrivate__MAPPING_MISSING__;
+ (void)__MPModelPropertySocialPersonIsVerified__MAPPING_MISSING__;
+ (void)__MPModelPropertySocialPersonPendingRequestsCount__MAPPING_MISSING__;
+ (void)__MPModelPropertySocialPersonUncensoredName__MAPPING_MISSING__;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__biography_KEY;
+ (id)__handle_KEY;
+ (id)__pendingRequestsCount_KEY;
+ (id)__privatePerson_KEY;
+ (id)__uncensoredName_KEY;
+ (id)__verified_KEY;
+ (long long)genericObjectType;
+ (id)kind;

- (id)artworkCatalog;

@end
