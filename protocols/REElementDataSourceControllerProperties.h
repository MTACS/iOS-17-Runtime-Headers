
@protocol REElementDataSourceControllerProperties <REExportedInterface>

@required

- (NSArray *)allProvidedElements;
- (bool)allowsLocationUse;
- (Class)dataSourceClass;
- (bool)hasDataAvailable;
- (NSString *)name;
- (NSArray *)supportedSections;
- (unsigned long long)updateCount;

@end
