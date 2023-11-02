
@protocol CLKComplicationWidgetMigrationDataSource

@required

- (CLKComplicationWidgetMigrationConfiguration *)cachedWidgetMigrationForAppIdentifier:(NSString *)arg1 descriptor:(CLKComplicationDescriptor *)arg2;
- (void)loadWidgetMigrationsForAppIdentifier:(void *)arg1 descriptor:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, CLKComplicationDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLKComplicationWidgetMigrationConfiguration *, NSError *, void*

@end
