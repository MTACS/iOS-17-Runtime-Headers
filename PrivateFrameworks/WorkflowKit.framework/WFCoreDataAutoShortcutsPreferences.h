
@interface WFCoreDataAutoShortcutsPreferences : NSManagedObject

@property (nonatomic, retain) NSData *appDescriptor;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, retain) NSData *cloudKitMetadata;
@property (nonatomic, retain) NSData *disabledAutoShortcuts;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long lastSyncedHash;
@property (nonatomic) bool siriEnabled;
@property (nonatomic) bool spotlightEnabled;

+ (id)fetchRequest;

@end
