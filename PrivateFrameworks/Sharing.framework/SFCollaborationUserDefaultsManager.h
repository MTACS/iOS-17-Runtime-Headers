
@interface SFCollaborationUserDefaultsManager : NSObject

+ (id)_createRemoteDataProxyWithErrorHandler:(id /* block */)arg1;
+ (void)requestCollaborativeModeForContentIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)saveCollaborativeMode:(id)arg1 forContentIdentifier:(id)arg2;

@end
