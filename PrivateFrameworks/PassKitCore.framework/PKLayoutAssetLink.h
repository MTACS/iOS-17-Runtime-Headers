
@interface PKLayoutAssetLink : NSObject <PKDynamicTemplateLayoutAsset> {
    NSNumber * _adamID;
    NSDictionary * _configuration;
    NSString * _displayText;
    NSString * _name;
    PKOSVersionRequirementRange * _osVersionRange;
    NSURL * _url;
}

@property (nonatomic, retain) NSNumber *adamID;
@property (nonatomic, retain) NSDictionary *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) PKOSVersionRequirementRange *osVersionRange;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;

+ (id)assetKey;
+ (id)nameToAssetsMapFromDictionaries:(id)arg1;

- (void).cxx_destruct;
- (id)adamID;
- (id)configuration;
- (id)displayText;
- (id)initWithDictionary:(id)arg1;
- (id)name;
- (id)osVersionRange;
- (void)setAdamID:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOsVersionRange:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
