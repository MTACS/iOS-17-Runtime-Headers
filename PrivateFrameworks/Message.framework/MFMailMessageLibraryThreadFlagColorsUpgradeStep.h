
@interface MFMailMessageLibraryThreadFlagColorsUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_threadsTableSchemaWithMessagesTable:(id)arg1 conversationsTable:(id)arg2 threadScopesTable:(id)arg3;
+ (int)runWithConnection:(id)arg1;

@end
