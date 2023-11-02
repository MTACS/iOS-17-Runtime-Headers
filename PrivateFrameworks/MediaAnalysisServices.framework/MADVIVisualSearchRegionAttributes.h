
@interface MADVIVisualSearchRegionAttributes : NSObject <NSSecureCoding> {
    NSString * _detailedDescription;
    NSString * _domain;
    NSString * _knowledgeGraphID;
    NSDictionary * _knowledgeProperties;
    NSString * _shortDescription;
    MADVIVisualSearchThirdPartyObject * _thirdPartyObject;
    float  _thumbnailAspectRatio;
    NSURL * _thumbnailURL;
    NSString * _title;
    NSURL * _webURL;
}

@property (nonatomic, readonly) NSString *detailedDescription;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *knowledgeGraphID;
@property (nonatomic, readonly) NSDictionary *knowledgeProperties;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, readonly) MADVIVisualSearchThirdPartyObject *thirdPartyObject;
@property (nonatomic, readonly) float thumbnailAspectRatio;
@property (nonatomic, readonly) NSURL *thumbnailURL;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *webURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)detailedDescription;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 knowledgeGraphID:(id)arg2 title:(id)arg3 thumbnailURL:(id)arg4 thumbnailAspectRatio:(float)arg5 shortDescription:(id)arg6 detailedDescription:(id)arg7 webURL:(id)arg8 knowledgeProperties:(id)arg9;
- (id)knowledgeGraphID;
- (id)knowledgeProperties;
- (void)setThirdPartyObject:(id)arg1;
- (id)shortDescription;
- (id)thirdPartyObject;
- (float)thumbnailAspectRatio;
- (id)thumbnailURL;
- (id)title;
- (id)webURL;

@end
