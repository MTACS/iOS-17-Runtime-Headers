
@interface WFiTunesObject : MTLModel <MTLJSONSerializing, NSSecureCoding, WFNaming> {
    NSDictionary * _artworkURLs;
    NSString * _censoredName;
    NSString * _identifier;
    NSString * _kind;
    NSString * _name;
    NSURL * _viewURL;
}

@property (nonatomic, readonly) NSDictionary *artworkURLs;
@property (nonatomic, readonly) NSString *censoredName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *kind;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) NSDictionary *podcastQueryDictionary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *viewURL;
@property (nonatomic, readonly, copy) NSString *wfName;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)JSONKeyPathsByPropertyKey;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)artistIDJSONTransformer;
+ (id)artworkURLsJSONTransformer;
+ (Class)classForParsingJSONDictionary:(id)arg1;
+ (id)identifierJSONTransformer;
+ (id)releaseDateJSONTransformer;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)artworkURLs;
- (id)censoredName;
- (id)identifier;
- (id)initWithName:(id)arg1 identifier:(id)arg2 kind:(id)arg3;
- (id)kind;
- (id)name;
- (void)setIdentifier:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setName:(id)arg1;
- (id)viewURL;
- (id)wfName;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (id)podcastQueryDictionary;

@end
