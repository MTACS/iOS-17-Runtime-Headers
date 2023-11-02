
@interface SBHSimpleApplicationDataSource : NSObject <SBHIconModelApplicationDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)allApplicationPlaceholdersForIconModel:(id)arg1;
- (id)allApplicationsForIconModel:(id)arg1;
- (id)iconModel:(id)arg1 applicationWithBundleIdentifier:(id)arg2;
- (id)makeApplicationWithRecord:(id)arg1;
- (id)simpleApplicationsWithEnumeratorOptions:(unsigned long long)arg1;

@end
