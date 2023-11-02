
@interface FBKMatcherPredicate : NSObject {
    FBKFileMatcher * _fileMatcher;
    FBKFilePredicate * _filePredicate;
    bool  _isAdditional;
}

@property (nonatomic, readonly) NSString *deBundleIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) FBKFileMatcher *fileMatcher;
@property (nonatomic, retain) FBKFilePredicate *filePredicate;
@property (nonatomic, readonly) bool hasCachedLocalizedDataFromExtension;
@property (nonatomic, readonly) bool hasRegularExpression;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *hashingKey;
@property (nonatomic) bool isAdditional;
@property (nonatomic, readonly) bool isConfiguredWithDEBundleIdentifier;
@property (nonatomic, readonly) NSString *localizedDataCollectedExplanation;
@property (nonatomic, readonly) NSString *localizedDataCollectedSummary;
@property (nonatomic, readonly) NSString *localizedWhenItWillGather;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) bool requiresRemote;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, readonly) bool shouldAutoGather;

+ (id)shortDateFormatter;
+ (id)shortestDateFormatter;

- (void).cxx_destruct;
- (bool)collectsSameDiagnosticsAsOtherMatcher:(id)arg1;
- (id)deBundleIdentifier;
- (id)description;
- (id)fileMatcher;
- (id)filePredicate;
- (bool)hasCachedLocalizedDataFromExtension;
- (bool)hasRegularExpression;
- (long long)hash;
- (id)hashingKey;
- (id)initWithFileMatcher:(id)arg1 filePredicate:(id)arg2;
- (bool)isAdditional;
- (bool)isConfiguredWithDEBundleIdentifier;
- (bool)isEqual:(id)arg1;
- (id)localizedDataCollectedExplanation;
- (id)localizedDataCollectedSummary;
- (id)localizedWhenItWillGather;
- (id)name;
- (id)platform;
- (bool)requiresRemote;
- (void)setFileMatcher:(id)arg1;
- (void)setFilePredicate:(id)arg1;
- (void)setIsAdditional:(bool)arg1;
- (id)shortDescription;
- (bool)shouldAutoGather;

@end
