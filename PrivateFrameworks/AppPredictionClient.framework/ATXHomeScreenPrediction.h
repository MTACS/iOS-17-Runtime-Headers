
@interface ATXHomeScreenPrediction : NSObject {
    NSString * _blendingCacheId;
    NSArray * _stacksAffectedByDebugRotation;
    NSDictionary * _suggestions;
}

@property (nonatomic, readonly) NSString *blendingCacheId;
@property (nonatomic, readonly) NSArray *stacksAffectedByDebugRotation;

- (void).cxx_destruct;
- (id)blendingCacheId;
- (id)init;
- (id)initWithBlendingCacheIdentifier:(id)arg1 widgetSuggestions:(id)arg2 stacksAffectedByDebugRotation:(id)arg3;
- (id)stacksAffectedByDebugRotation;
- (id)suggestionForStackIdentifier:(id)arg1;
- (id)suggestionsForAllStacks;

@end
