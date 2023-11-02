
@interface PKLayoutAssetImage : NSObject <PKDynamicTemplateLayoutAsset> {
    NSDictionary * _configuration;
    NSString * _name;
    PKOSVersionRequirementRange * _osVersionRange;
    PKRemoteImageSet * _remoteImage;
    NSArray * _subimages;
}

@property (nonatomic, retain) NSDictionary *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) PKOSVersionRequirementRange *osVersionRange;
@property (nonatomic, retain) PKRemoteImageSet *remoteImage;
@property (nonatomic, retain) NSArray *subimages;
@property (readonly) Class superclass;

+ (id)assetKey;
+ (id)nameToAssetsMapFromDictionaries:(id)arg1;

- (void).cxx_destruct;
- (id)configuration;
- (id)initWithName:(id)arg1 remoteImage:(id)arg2;
- (id)initWithName:(id)arg1 subimages:(id)arg2;
- (id)name;
- (id)osVersionRange;
- (id)remoteImage;
- (void)setConfiguration:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOsVersionRange:(id)arg1;
- (void)setRemoteImage:(id)arg1;
- (void)setSubimages:(id)arg1;
- (id)subimages;

@end
