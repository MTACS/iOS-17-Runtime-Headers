
@interface HDMCWatchFeatureSettings : NSObject {
    id /* block */  _changeComputer;
    NSString * _featureIdentifier;
}

@property (nonatomic, readonly, copy) NSString *featureIdentifier;

+ (id)algorithmicProjectionsSettings;
+ (id)hiddenLoggingRowsSettings;

- (void).cxx_destruct;
- (id)featureIdentifier;
- (id)userDefaultsChangesFromFeatureSettings:(id)arg1 currentUserDefaults:(id)arg2;

@end
