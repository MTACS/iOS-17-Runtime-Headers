
@interface WFMKMapItemContentItem : WFContentItem <WFContentItemClass> {
    CLLocation * _queryLocation;
}

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) MKMapItem *mapItem;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (nonatomic, retain) CLLocation *queryLocation;
@property (readonly) Class superclass;

+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemWithMapItem:(id)arg1 fromQueryLocation:(id)arg2 origin:(id)arg3 disclosureLevel:(unsigned long long)arg4;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;

- (void).cxx_destruct;
- (bool)canGenerateRepresentationForType:(id)arg1;
- (void)generateObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (bool)getListAltText:(id /* block */)arg1;
- (bool)getListSubtitle:(id /* block */)arg1;
- (id)mapItem;
- (unsigned long long)preferredDisplayStyle;
- (id)queryLocation;
- (void)setQueryLocation:(id)arg1;

@end
