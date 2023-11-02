
@interface WFWordPressBlog : MTLModel <MTLJSONSerializing, NSSecureCoding> {
    NSNumber * _blogId;
    NSString * _blogName;
    NSURL * _endpointURL;
    bool  _isAdmin;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSNumber *blogId;
@property (nonatomic, readonly, copy) NSString *blogName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly, copy) NSURL *endpointURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAdmin;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSURL *url;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)blogIdJSONTransformer;
+ (id)blogWithEndpointURL:(id)arg1;
+ (id)endpointURLJSONTransformer;
+ (id)isAdminJSONTransformer;
+ (bool)supportsSecureCoding;
+ (id)urlJSONTransformer;

- (void).cxx_destruct;
- (id)blogId;
- (id)blogName;
- (id)endpointURL;
- (id)initWithEndpointURL:(id)arg1;
- (bool)isAdmin;
- (id)url;

@end
