
@interface MFMailMessageLibraryGlobalDataUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_messagesTableDefinition;
+ (bool)_recreateMessagesIndices:(id)arg1;
+ (id)_triggerDefinition;
+ (int)runWithConnection:(id)arg1;

@end
