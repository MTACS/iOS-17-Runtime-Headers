
@interface MUISearchRankedSuggester : NSObject <EFLoggable, MUISearchSuggester> {
    NSString * _bundleID;
}

@property (nonatomic, readonly) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logIdentifier;
@property (nonatomic, readonly) bool shouldQueryForAsYouType;
@property (readonly) Class superclass;

+ (id)log;
+ (id)suggesterWithBundleID:(id)arg1;

- (void).cxx_destruct;
- (id)categories;
- (id)generateSuggestionsUsingPhraseManager:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithBundleID:(id)arg1;
- (id)logIdentifier;
- (bool)shouldQueryForAsYouType;

@end
