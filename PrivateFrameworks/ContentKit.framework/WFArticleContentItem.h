
@interface WFArticleContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) WFArticle *article;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;

+ (id)URLCoercionHandler;
+ (id)coercions;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)dateCoercionHandler;
+ (id)fileWithHTML:(id)arg1 named:(id)arg2;
+ (id)htmlCoercionHandler;
+ (id)imageCoercionHandler;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)stringCoercionHandler;
+ (id)stringConversionBehavior;
+ (id)typeDescription;

- (id)article;
- (id)defaultSourceForRepresentation:(id)arg1;
- (bool)getListSubtitle:(id /* block */)arg1;
- (id)htmlRepresentation;

@end
