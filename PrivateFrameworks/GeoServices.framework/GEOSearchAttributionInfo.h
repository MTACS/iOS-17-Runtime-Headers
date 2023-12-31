
@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding> {
    unsigned int  _attributionRequirementsMask;
    NSString * _captionDisplayName;
    NSString * _displayName;
    NSArray * _logoPaths;
    NSArray * _snippetLogoPaths;
    GEOSearchAttributionSource * _source;
}

@property (nonatomic, readonly) NSString *appAdamID;
@property (nonatomic, readonly) NSArray *attributionApps;
@property (nonatomic, readonly) NSString *captionDisplayName;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned int requirementsMask;
@property (nonatomic, readonly) bool shouldOpenInAppStore;
@property (nonatomic, readonly) GEOSearchAttributionSource *source;
@property (nonatomic, readonly) unsigned int version;
@property (nonatomic, readonly) NSString *webBaseActionURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addLogoPath:(id)arg1;
- (id)appAdamID;
- (id)attributionApps;
- (id)captionDisplayName;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAttributionRequirement:(int)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4;
- (id)logoPathForScale:(double)arg1;
- (unsigned int)requirementsMask;
- (bool)shouldOpenInAppStore;
- (id)snippetLogoPathForScale:(double)arg1;
- (id)source;
- (bool)supportsActionURLs;
- (unsigned int)version;
- (id)webBaseActionURL;

@end
