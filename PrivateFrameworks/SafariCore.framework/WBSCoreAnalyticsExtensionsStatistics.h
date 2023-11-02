
@interface WBSCoreAnalyticsExtensionsStatistics : NSObject {
    unsigned long long  _disabledCount;
    unsigned long long  _enabledCount;
    bool  _hasExtensionThatCanOverrideNewTabPage;
    bool  _newTabPageIsOverridden;
    NSArray * _telemetryDataForExtensions;
}

@property (nonatomic, readonly) unsigned long long disabledCount;
@property (nonatomic, readonly) unsigned long long enabledCount;
@property (nonatomic, readonly) bool hasExtensionThatCanOverrideNewTabPage;
@property (nonatomic, readonly) bool newTabPageIsOverridden;
@property (nonatomic, readonly) NSArray *telemetryDataForExtensions;

- (void).cxx_destruct;
- (unsigned long long)disabledCount;
- (unsigned long long)enabledCount;
- (bool)hasExtensionThatCanOverrideNewTabPage;
- (id)initWithExtensionsList:(id)arg1 extractDeveloperIdentifier:(id /* block */)arg2 extractComposedIdentifier:(id /* block */)arg3 extensionTelemetryDataPredicate:(id /* block */)arg4;
- (id)initWithExtensionsList:(id)arg1 extractDeveloperIdentifier:(id /* block */)arg2 extractComposedIdentifier:(id /* block */)arg3 extensionTelemetryDataPredicate:(id /* block */)arg4 newTabPageIsOverridden:(bool)arg5;
- (bool)newTabPageIsOverridden;
- (id)telemetryDataForExtensions;

@end
