
@interface ATXInformationFeatureWeights : NSObject {
    NSDictionary * _weights;
}

- (void).cxx_destruct;
- (double)defaultWeightForFeatureName:(unsigned long long)arg1;
- (id)init;
- (double)weightForFeatureName:(unsigned long long)arg1 widgetExtensionBundleId:(id)arg2 widgetKind:(id)arg3;
- (id)widgetIdentifierForWidgetExtensionBundleId:(id)arg1 widgetKind:(id)arg2;

@end
