
@interface EDAddSendersTableUpgradeStep : NSObject <EDTableUpgradeStep>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)runWithConnection:(id)arg1;
+ (id)schema;
+ (id)senderAddressesTableSchema;
+ (id)sendersTableSchema;

@end
