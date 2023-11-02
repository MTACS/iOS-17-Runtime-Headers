
@interface NTKWidgetComplicationMigrationDefines : NSObject

+ (id)_complicationTypeToWidgetMigrations;
+ (bool)hasMigratedComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)migrateComplication:(id)arg1 forFamily:(long long)arg2;

@end
