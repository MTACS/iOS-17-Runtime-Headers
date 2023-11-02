
@interface INCAppProxy : NSObject {
    INCExtensionConnection * _connection;
}

@property (nonatomic, readonly) INCExtensionConnection *_connection;

+ (void)initialize;
+ (bool)shouldLaunchAppInBackgroundWithIntent:(id)arg1 intentResponse:(id)arg2;

- (void).cxx_destruct;
- (id)_connection;
- (id)_initWithConnection:(id)arg1;
- (void)launchAppInBackground:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)launchAppInBackground:(bool)arg1 restrictAppsToCarPlay:(bool)arg2 userActivityIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)launchAppInBackground:(bool)arg1 restrictAppsToCarPlay:(bool)arg2 userActivityIdentifier:(id)arg3 retainsSiri:(bool)arg4 completionHandler:(id /* block */)arg5;

@end
