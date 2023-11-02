
@interface WFRichTextContentItem : WFGenericFileContentItem <WFContentItemClass>

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

+ (id)attributesDictionaryForType:(id)arg1;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)documentTypeForType:(id)arg1;
+ (id)htmlFooter;
+ (id)htmlHeader;
+ (void)loadAttributedStringInWebViewFromHTMLFile:(id)arg1 handler:(id /* block */)arg2 attributedStringOptions:(id)arg3 documentAttributes:(id*)arg4 name:(id)arg5 coercionOptions:(id)arg6;
+ (id)normalizedHTMLDocumentFromHTML:(id)arg1;
+ (id)normalizedHTMLDocumentFromHTMLData:(id)arg1;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)pluralTypeDescription;
+ (id)stringConversionBehavior;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;

- (bool)canGenerateRepresentationForType:(id)arg1;
- (void)generateAttributedString:(id /* block */)arg1 fromFile:(id)arg2 forClass:(Class)arg3 coercionOptions:(id)arg4;
- (void)generateDataRepresentation:(id /* block */)arg1 fromAttributedString:(id)arg2 forType:(id)arg3;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)generateFileRepresentations:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentations:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateRTFDRepresentation:(id /* block */)arg1 fromAttributedString:(id)arg2 forType:(id)arg3;
- (void)getFileRepresentationsForSerialization:(id /* block */)arg1;
- (void)getPDFFromResource:(id)arg1 includeMargin:(bool)arg2 options:(id)arg3 handler:(id /* block */)arg4;
- (bool)isContent;
- (id)preferredFileType;

@end
