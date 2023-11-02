
@interface ATXHomeScreenCachedSuggestions : NSObject <ATXUICacheProtocol> {
    NSDictionary * _cachedAppPredictionPanelLayouts;
    NSDictionary * _cachedSuggestedWidgetsLayouts;
    NSDictionary * _cachedSuggestionWidgetLayouts;
    NSDictionary * _cachedTopOfStackLayouts;
    NSArray * _fallbackSuggestions;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) NSDictionary *cachedAppPredictionPanelLayouts;
@property (nonatomic, readonly) NSDictionary *cachedSuggestedWidgetsLayouts;
@property (nonatomic, readonly) NSDictionary *cachedSuggestionWidgetLayouts;
@property (nonatomic, readonly) NSDictionary *cachedTopOfStackLayouts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *fallbackSuggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_jsonRawDataForLayoutListMapping:(id)arg1;
- (id)_jsonRawDataForWidgetLayoutMapping:(id)arg1;
- (id)_layoutDictionaryWithKeys:(id)arg1 protoLayouts:(id)arg2;
- (id)_layoutListDictionaryWithKeys:(id)arg1 protoLayoutLists:(id)arg2;
- (id)_protoLayoutListsFromLayoutListDictionary:(id)arg1 orderedByKeys:(id)arg2;
- (id)_protoLayoutsFromLayoutDictionary:(id)arg1 orderedByKeys:(id)arg2;
- (id)allSuggestionsInCachedSuggestions;
- (id)cachedAppPredictionPanelLayouts;
- (id)cachedSuggestedWidgetsLayouts;
- (id)cachedSuggestionWidgetLayouts;
- (id)cachedTopOfStackLayouts;
- (id)compactDescription;
- (id)description;
- (id)descriptionWithoutPreviews;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackSuggestions;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUUID:(id)arg1 suggestionWidgetLayouts:(id)arg2 appPredictionPanelLayouts:(id)arg3 topOfStackLayouts:(id)arg4 suggestedWidgetLayouts:(id)arg5 fallbackSuggestions:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)jsonRawData;
- (id)minSuggestionsInCachedSuggestionsWithoutPreviewsOrFallbacks;
- (id)proto;
- (id)protoForBiome;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
