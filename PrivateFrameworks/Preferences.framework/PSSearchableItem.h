
@interface PSSearchableItem : NSObject {
    NSString * _bundleID;
    NSString * _category;
    NSString * _classIdentifier;
    NSString * _contentDescription;
    NSString * _identifier;
    NSArray * _keywords;
    NSString * _name;
    NSNumber * _rankingHint;
    NSArray * _requiredCapabilities;
    NSArray * _requiredCapabilitiesOr;
    NSString * _url;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *classIdentifier;
@property (nonatomic, retain) NSString *contentDescription;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSArray *keywords;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *rankingHint;
@property (nonatomic, retain) NSArray *requiredCapabilities;
@property (nonatomic, retain) NSArray *requiredCapabilitiesOr;
@property (nonatomic, retain) NSString *url;

- (void).cxx_destruct;
- (id)bundleID;
- (id)category;
- (id)classIdentifier;
- (id)contentDescription;
- (id)identifier;
- (id)keywords;
- (id)name;
- (id)rankingHint;
- (id)requiredCapabilities;
- (id)requiredCapabilitiesOr;
- (void)setBundleID:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setClassIdentifier:(id)arg1;
- (void)setContentDescription:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRankingHint:(id)arg1;
- (void)setRequiredCapabilities:(id)arg1;
- (void)setRequiredCapabilitiesOr:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)toCSSearchableItem;
- (id)toManifestDictionary;
- (id)url;

@end
