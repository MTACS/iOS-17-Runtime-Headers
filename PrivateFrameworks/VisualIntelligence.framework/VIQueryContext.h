
@interface VIQueryContext : NSObject <NSCopying> {
    NSString * _applicationIdentifier;
    NSArray * _catalogIDs;
    NSString * _countryCode;
    NSString * _engagementSuggestionType;
    NSString * _featureIdentifier;
    long long  _imageType;
    NSURL * _imageURL;
    bool  _includeLowConfidenceRegions;
    NSString * _locale;
    CLLocation * _location;
    <MTLDevice> * _preferredMetalDevice;
    unsigned long long  _queryID;
    NSURL * _referralURL;
    bool  _runOnDeviceOnlyInSearch;
    bool  _skipDomainModelInParse;
    NSString * _teamID;
    double  _uiScale;
}

@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) NSArray *catalogIDs;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *engagementSuggestionType;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) bool includeLowConfidenceRegions;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) <MTLDevice> *preferredMetalDevice;
@property (nonatomic, readonly) unsigned long long queryID;
@property (nonatomic, readonly) NSURL *referralURL;
@property (nonatomic, readonly) bool runOnDeviceOnlyInSearch;
@property (nonatomic, readonly) bool skipDomainModelInParse;
@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic, readonly) double uiScale;

+ (id)contextWithDictionary:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)catalogIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)engagementSuggestionType;
- (id)featureIdentifier;
- (long long)imageType;
- (id)imageURL;
- (bool)includeLowConfidenceRegions;
- (id)initWithQueryID:(unsigned long long)arg1 applicationIdentifier:(id)arg2 uiScale:(double)arg3 teamID:(id)arg4 catalogIDs:(id)arg5 location:(id)arg6 imageURL:(id)arg7 referralURL:(id)arg8 imageType:(long long)arg9 featureIdentifier:(id)arg10 engagementSuggestionType:(id)arg11 locale:(id)arg12 countryCode:(id)arg13 preferredMetalDevice:(id)arg14 includeLowConfidenceRegions:(bool)arg15 skipDomainModelInParse:(bool)arg16 runOnDeviceOnlyInSearch:(bool)arg17;
- (id)locale;
- (id)location;
- (id)preferredMetalDevice;
- (unsigned long long)queryID;
- (id)referralURL;
- (bool)runOnDeviceOnlyInSearch;
- (bool)skipDomainModelInParse;
- (id)teamID;
- (double)uiScale;

@end
