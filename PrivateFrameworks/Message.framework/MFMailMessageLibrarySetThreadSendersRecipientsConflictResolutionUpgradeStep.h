
@interface MFMailMessageLibrarySetThreadSendersRecipientsConflictResolutionUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_schemaWithThreadsTable:(id)arg1;
+ (int)runWithConnection:(id)arg1;
+ (id)threadRecipientsTableSchema;
+ (id)threadSendersTableSchema;

@end
