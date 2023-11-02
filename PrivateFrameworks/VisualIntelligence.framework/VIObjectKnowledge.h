
@interface VIObjectKnowledge : NSObject <NSCopying, NSSecureCoding> {
    NSString * _detailedDescription;
    NSString * _knowledgeGraphID;
    NSArray * _knowledgeProperties;
    NSData * _serializedDomainResponse;
    long long  _serializedDomainType;
    NSString * _shortDescription;
    float  _thumbnailAspectRatio;
    NSURL * _thumbnailURL;
    NSString * _title;
    NSURL * _webURL;
}

@property (nonatomic, readonly, copy) NSString *detailedDescription;
@property (nonatomic, readonly, copy) NSString *knowledgeGraphID;
@property (nonatomic, readonly, copy) NSArray *knowledgeProperties;
@property (nonatomic, readonly, copy) NSData *serializedDomainResponse;
@property (nonatomic, readonly) long long serializedDomainType;
@property (nonatomic, readonly, copy) NSString *shortDescription;
@property (nonatomic, readonly) float thumbnailAspectRatio;
@property (nonatomic, readonly, copy) NSURL *thumbnailURL;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSURL *webURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detailedDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKnowledgeGraphID:(id)arg1 title:(id)arg2 thumbnailURL:(id)arg3 thumbnailAspectRatio:(float)arg4 shortDescription:(id)arg5 detailedDescription:(id)arg6 webURL:(id)arg7 knowledgeProperties:(id)arg8 serializedDomainType:(long long)arg9 serializedDomainResponse:(id)arg10;
- (bool)isEqual:(id)arg1;
- (id)knowledgeGraphID;
- (id)knowledgeProperties;
- (id)serializedDomainResponse;
- (long long)serializedDomainType;
- (id)shortDescription;
- (float)thumbnailAspectRatio;
- (id)thumbnailURL;
- (id)title;
- (id)webURL;

@end
