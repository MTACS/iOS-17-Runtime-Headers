
@interface WFTriggerMigrator : NSObject <NSKeyedUnarchiverDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)migrateTriggerUponUnarchival:(id)arg1;
+ (id)migrateUserFocusActivityTriggerFromUniqueIdentifierToSemanticIdentifier:(id)arg1;
+ (id)migratedUserFocusActivityTriggerFromLegacyDNDTrigger:(id)arg1;

- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;

@end
