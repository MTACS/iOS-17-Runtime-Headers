
@interface EDTruncateMailboxUpgradeStep : NSObject <EDTableUpgradeStep, EFLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)countOver10kWithConnection:(id)arg1;
+ (id)log;
+ (void)presentNeedlessAlertIfNecessaryWithPersistence:(id)arg1;
+ (int)runWithConnection:(id)arg1;

@end
