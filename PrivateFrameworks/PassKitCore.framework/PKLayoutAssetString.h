
@interface PKLayoutAssetString : NSObject <PKDynamicTemplateLayoutAsset> {
    NSDictionary * _configuration;
    NSString * _displayText;
    NSString * _markdownText;
    NSString * _name;
    PKOSVersionRequirementRange * _osVersionRange;
}

@property (nonatomic, retain) NSDictionary *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *displayText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *markdownText;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) PKOSVersionRequirementRange *osVersionRange;
@property (readonly) Class superclass;

+ (id)assetKey;
+ (id)nameToAssetsMapFromDictionaries:(id)arg1;

- (void).cxx_destruct;
- (id)configuration;
- (id)displayText;
- (id)initWithDictionary:(id)arg1;
- (id)markdownText;
- (id)name;
- (id)osVersionRange;
- (void)setConfiguration:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setMarkdownText:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOsVersionRange:(id)arg1;

@end
