
@interface CLKCComplicationBundleDataSource : CLKCComplicationDataSource

@property (nonatomic, readonly) CLKComplicationDescriptor *complicationDescriptor;

+ (id)appGroupIdentifier;
+ (id)appIdentifier;
+ (id)bundleIdentifier;
+ (id)complicationApplicationIdentifier;
+ (id)complicationDescriptors;
+ (bool)hasMigratedToWidgetForFamily:(long long)arg1 device:(id)arg2;
+ (id)legacyNTKComplicationType;
+ (id)localizedAppName;
+ (id)localizedComplicationName;
+ (id)sectionIdentifier;
+ (bool)useComplicationDescriptorsOnCompanion;

- (id)complicationApplicationIdentifier;
- (id)complicationDescriptor;
- (void)fetchWidgetMigrationForDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchWidgetMigrationForDescriptor:(id)arg1 family:(long long)arg2 completion:(id /* block */)arg3;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* block */)arg3;

@end
