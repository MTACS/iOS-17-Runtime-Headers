
@interface AFUISceneClientSettings : UIApplicationSceneClientSettings <AFUISceneClientSettings>

@property (nonatomic, readonly) unsigned int clientWindowContextID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned int)clientWindowContextID;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
