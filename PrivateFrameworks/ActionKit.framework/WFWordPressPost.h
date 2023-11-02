
@interface WFWordPressPost : MTLModel <MTLJSONSerializing, NSSecureCoding> {
    NSURL * _link;
    NSNumber * _postId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *link;
@property (nonatomic, readonly, copy) NSNumber *postId;
@property (readonly) Class superclass;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)linkJSONTransformer;
+ (id)postIdJSONTransformer;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)link;
- (id)postId;

@end
