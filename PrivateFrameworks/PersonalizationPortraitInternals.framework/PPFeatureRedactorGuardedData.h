
@interface PPFeatureRedactorGuardedData : NSObject {
    NSDictionary * _allowedFeatures;
    bool  _shouldRedactFeatures;
    bool  _shouldTranslateAllowedFeatures;
}

- (void).cxx_destruct;

@end
