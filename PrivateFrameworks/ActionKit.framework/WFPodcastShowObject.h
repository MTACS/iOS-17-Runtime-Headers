
@interface WFPodcastShowObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming> {
    NSArray * _children;
    NSURL * _feedURL;
    NSString * _storeId;
    NSString * _title;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSURL *feedURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *storeId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)childrenJSONTransformer;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)children;
- (id)feedURL;
- (id)storeId;
- (id)title;
- (id)uuid;
- (id)wfName;

@end
