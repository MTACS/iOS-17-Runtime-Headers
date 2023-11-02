
@interface REMCloudContainer : NSObject

+ (id)_newCloudContainerForAccountIdentifier:(id)arg1;
+ (void)_writeLogCreatingCKContainerWithAccountIdentifier:(id)arg1 personaIdentifier:(id)arg2;
+ (bool)isSandboxEnvironment;
+ (id)newCloudContainerForAccount:(id)arg1;
+ (id)newCloudContainerForAccountID:(id)arg1;
+ (id)newCloudContainerWithPublicCloudDatabase;

@end
