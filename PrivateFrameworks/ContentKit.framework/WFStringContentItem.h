
@interface WFStringContentItem : WFGenericFileContentItem <WFContentItemClass> {
    WFDataDetectorResults * _dataDetectorResults;
}

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
@property (nonatomic, readonly) bool cachesSupportedTypes;
@property (nonatomic, retain) WFDataDetectorResults *dataDetectorResults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasStringOutput;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool includesFileRepresentationInSerializedItem;
@property (nonatomic, readonly) NSDictionary *metadataForSerialization;
@property (nonatomic, readonly) WFFileType *preferredFileType;
@property (nonatomic, readonly) WFObjectType *preferredObjectType;
@property (nonatomic, readonly) NSString *string;
@property (readonly) Class superclass;

+ (id)coercions;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)dictionaryCoercionHandler;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4 cachingIdentifier:(id)arg5;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pdfCoercionHandler;
+ (id)pluralTypeDescription;
+ (id)printFormatterCoercionHandler;
+ (id)stringCoercionHandler;
+ (id)textFileCoercionHandler;
+ (id)typeDescription;

- (void).cxx_destruct;
- (id)dataDetectorResults;
- (bool)includesFileRepresentationInSerializedItem;
- (bool)isContent;
- (void)setDataDetectorResults:(id)arg1;
- (id)string;

@end
