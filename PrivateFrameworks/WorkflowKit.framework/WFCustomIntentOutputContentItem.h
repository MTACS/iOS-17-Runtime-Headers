
@interface WFCustomIntentOutputContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (nonatomic, readonly) INCustomObject *customObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;

+ (id)codableDescription;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)typeDescription;

- (Class)classForCoder;
- (Class)classForCopying;
- (Class)classForKeyedArchiver;
- (id)customObject;
- (void)encodeWithCoder:(id)arg1;
- (id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)getListSubtitle:(id /* block */)arg1;
- (bool)getListThumbnail:(id /* block */)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithCoder:(id)arg1;

@end
