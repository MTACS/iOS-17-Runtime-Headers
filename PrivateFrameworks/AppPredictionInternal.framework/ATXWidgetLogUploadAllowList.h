
@interface ATXWidgetLogUploadAllowList : NSObject {
    bool  _allowListEnabled;
    NSSet * _allowedWidgetBundleIds;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithAssets:(id)arg1;
- (bool)logUploadAllowedForWidgetBundleId:(id)arg1;

@end
