
@protocol REDataSourceManagerProperties <REExportedInterface>

@required

- (NSSet *)availableDataSourceIdentifiers;
- (NSSet *)currentDataSourceIdentifiers;
- (NSArray *)currentDataSources;
- (NSArray *)dataSourceControllers;
- (NSSet *)disabledDataSources;

@end
