
@interface WFiTunesObjectContentItem : WFContentItem <WFURLCoercion>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFiTunesObject *object;
@property (readonly) Class superclass;

+ (bool)canLowercaseTypeDescription;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)outputTypes;
+ (bool)parseiTunesURL:(id)arg1 itemIdentifier:(id*)arg2 countryCode:(id*)arg3;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;
+ (bool)urlItem_canCoerceFromURL:(id)arg1;
+ (void)urlItem_generateObjectRepresentations:(id /* block */)arg1 fromURL:(id)arg2 forClass:(Class)arg3;
+ (void)urlItem_generateObjectRepresentations:(id /* block */)arg1 fromiTunesURL:(id)arg2 forClass:(Class)arg3;
+ (id)urlItem_outputClasses;
+ (id)urlItem_sharingItemClassesByBundleIdentifier;

- (bool)canGenerateRepresentationForType:(id)arg1;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (void)getArtworkDataWithURLs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getArtworkForSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)getPreferredArtworkURL:(id /* block */)arg1;
- (id)object;
- (id)possibleArtworkURLs;
- (id)preferredFileType;

@end
