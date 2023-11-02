
@interface EDAddThreadTablesUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_schemaWithMessagesTable:(id)arg1 mailboxesTable:(id)arg2 conversationsTable:(id)arg3;
+ (int)runWithConnection:(id)arg1;
+ (id)threadMailboxesTableSchema;
+ (id)threadRecipientsTableSchema;
+ (id)threadScopesTableSchema;
+ (id)threadSendersTableSchema;
+ (id)threadsTableSchema;

@end
