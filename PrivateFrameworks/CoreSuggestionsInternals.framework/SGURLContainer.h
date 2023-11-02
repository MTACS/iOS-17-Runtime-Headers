
@interface SGURLContainer : NSObject <SGExternalEnrichment> {
    bool  _needsFlushing;
    NSMutableArray * _urls;
}

+ (bool)deleteAllURLsWithBundleIdentifier:(id)arg1 documentIdentifiers:(id)arg2 entityStore:(id)arg3;
+ (bool)deleteAllURLsWithBundleIdentifier:(id)arg1 domainSelection:(id)arg2 entityStore:(id)arg3;
+ (bool)deleteAllURLsWithBundleIdentifier:(id)arg1 entityStore:(id)arg2;
+ (id)urlsFoundBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdentifier:(id)arg3 entityStore:(id)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (void)flushWrites;
- (id)init;
- (id)numberOfExtractions;
- (void)writeWithEntityStore:(id)arg1;

@end
