
@interface WFGiphyObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming, WFSerializableContent> {
    NSString * _caption;
    NSDictionary * _images;
    NSString * _objectId;
    NSString * _type;
    NSURL * _url;
}

@property (nonatomic, readonly, copy) NSString *caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *images;
@property (nonatomic, readonly, copy) NSString *objectId;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, readonly, copy) NSURL *url;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)captionJSONTransformer;
+ (id)imagesJSONTransformer;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)urlJSONTransformer;

- (void).cxx_destruct;
- (id)caption;
- (id)images;
- (id)objectId;
- (id)originalImage;
- (id)smallestImage;
- (id)type;
- (id)url;
- (id)wfName;
- (id)wfSerializedRepresentation;

@end
