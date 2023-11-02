
@interface SBContinuityDisplayItem : SBDisplayItem {
    SBBestAppSuggestion * _appSuggestion;
}

@property (nonatomic, readonly) SBBestAppSuggestion *appSuggestion;

+ (id)continuityAppDisplayItemWithBundleIdentifier:(id)arg1 appSuggestion:(id)arg2;

- (void).cxx_destruct;
- (id)appSuggestion;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 displayIdentifier:(id)arg2 appSuggestion:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
