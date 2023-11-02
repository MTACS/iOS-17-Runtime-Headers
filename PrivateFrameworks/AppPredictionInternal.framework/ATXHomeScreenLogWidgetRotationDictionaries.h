
@interface ATXHomeScreenLogWidgetRotationDictionaries : NSObject {
    NSMutableDictionary * _widgetRotationDictionaries;
}

+ (id)_sourceKeyForWidgetRotationForRotationSession:(id)arg1;
+ (id)_sourceKeyOfNonProactiveWidgetRotationForReason:(id)arg1;
+ (id)_suggestionReasonToWidgetRotationDictionariesSourceKey:(int)arg1;
+ (id)widgetRotationDictionaryAccumulatorKeys;

- (void).cxx_destruct;
- (id)_createNewWidgetRotationDictionaryForBundleId:(id)arg1 kind:(id)arg2 size:(unsigned long long)arg3 source:(id)arg4 location:(id)arg5 isNPlusOne:(bool)arg6 isFirstRotationToNPlusOne:(bool)arg7;
- (id)_widgetRotationDictionaryForWidgetBundleId:(id)arg1 kind:(id)arg2 size:(unsigned long long)arg3 source:(id)arg4 location:(id)arg5 isNPlusOne:(bool)arg6 isFirstRotationToNPlusOne:(bool)arg7;
- (id)_widgetRotationDictionaryKeyWithWidgetId:(id)arg1 widgetKind:(id)arg2 widgetSize:(unsigned long long)arg3 source:(id)arg4 location:(id)arg5 isNPlusOne:(bool)arg6 isFirstRotationToNPlusOne:(bool)arg7;
- (id)dryRunResult;
- (id)init;
- (void)sendToCoreAnalytics;
- (void)updateWithRotationSession:(id)arg1;

@end
