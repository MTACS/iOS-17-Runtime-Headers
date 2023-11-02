
@interface WFPDFContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (nonatomic, readonly) NSDictionary *additionalRepresentationsForSerialization;
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

+ (id)contentCategories;
+ (id)countDescription;
+ (void)getPDFFromPrintFormatters:(id)arg1 nameIfKnown:(id)arg2 matchingInputSize:(bool)arg3 withMargin:(bool)arg4 startingAtPage:(long long)arg5 endingAtPage:(long long)arg6 completionHandler:(id /* block */)arg7;
+ (id)itemWithPrintFormatters:(id)arg1 names:(id)arg2;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)typeDescription;

- (void)createImageWithFileType:(id)arg1 colorspace:(struct CGColorSpace { }*)arg2 resolution:(double)arg3 completion:(id /* block */)arg4;
- (void)enumeratePagesInDocument:(id)arg1 block:(id /* block */)arg2;
- (void)generateFileRepresentations:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)getPDF:(id /* block */)arg1 matchingInputSize:(bool)arg2 withMargin:(bool)arg3 startingAtPage:(long long)arg4 endingAtPage:(long long)arg5;

@end
