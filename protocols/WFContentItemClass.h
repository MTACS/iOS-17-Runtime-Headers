
@protocol WFContentItemClass <NSObject>

@required

+ (bool)canLowercaseTypeDescription;
+ (NSArray *)contentCategories;
+ (NSString *)countDescription;
+ (NSString *)filterDescription;
+ (NSString *)localizedFilterDescription;
+ (NSString *)localizedPluralFilterDescription;
+ (NSString *)localizedPluralTypeDescription;
+ (NSString *)localizedTypeDescription;
+ (NSOrderedSet *)outputTypes;
+ (NSOrderedSet *)ownedTypes;
+ (NSString *)pluralFilterDescription;
+ (NSString *)pluralTypeDescription;
+ (NSString *)typeDescription;

- (WFContentAttributionSet *)defaultSourceForRepresentation:(WFRepresentation *)arg1;

@optional

+ (NSArray *)coercions;
+ (NSArray *)filterRepresentationsForAllowedContent:(NSArray *)arg1;
+ (id)itemWithSerializedItem:(NSDictionary *)arg1 forType:(WFFileType *)arg2 named:(NSString *)arg3 attributionSet:(WFContentAttributionSet *)arg4 cachingIdentifier:(NSUUID *)arg5;
+ (NSString *)localizedCountDescriptionWithValue:(long long)arg1;
+ (WFContentPropertyBuilder *)namePropertyBuilder;
+ (NSOrderedSet *)ownedPasteboardTypes;
+ (NSArray *)propertyBuilders;
+ (bool)supportedTypeMustBeDeterminedByInstance:(WFType *)arg1;

- (NSDictionary *)additionalRepresentationsForSerialization;
- (bool)alwaysEncodeUsingWFSerializableContent;
- (bool)cachesSupportedTypes;
- (bool)canGenerateRepresentationForType:(WFType *)arg1;
- (Class)classForCopying;
- (void)copyStateToItem:(WFContentItem *)arg1;
- (void)generateFileRepresentation:(void *)arg1 options:(void *)arg2 forType:(void *)arg3; // needs 3 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFFileRepresentation *, NSError *, void*, WFCoercionOptions *, WFFileType *
- (WFFileRepresentation *)generateFileRepresentationForType:(WFFileType *)arg1 options:(WFCoercionOptions *)arg2 error:(id*)arg3;
- (void)generateFileRepresentations:(void *)arg1 options:(void *)arg2 forType:(void *)arg3; // needs 3 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, WFCoercionOptions *, WFFileType *
- (NSArray *)generateFileRepresentationsForType:(WFFileType *)arg1 options:(WFCoercionOptions *)arg2 error:(id*)arg3;
- (void)generateObjectRepresentation:(void *)arg1 options:(void *)arg2 forClass:(void *)arg3; // needs 3 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSString *, NSError *, void*, WFCoercionOptions *, Class
- (WFObjectRepresentation *)generateObjectRepresentationForClass:(Class)arg1 options:(WFCoercionOptions *)arg2 error:(id*)arg3;
- (void)generateObjectRepresentations:(void *)arg1 options:(void *)arg2 forClass:(void *)arg3; // needs 3 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*, WFCoercionOptions *, Class
- (NSArray *)generateObjectRepresentationsForClass:(Class)arg1 options:(WFCoercionOptions *)arg2 error:(id*)arg3;
- (void)getFileRepresentationsForSerialization:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getPreferredFileExtension:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)getPreferredFileSize:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (bool)hasStringOutput;
- (bool)includesFileRepresentationInSerializedItem;
- (NSDictionary *)metadataForSerialization;
- (WFFileType *)preferredFileType;
- (WFObjectType *)preferredObjectType;

@end
