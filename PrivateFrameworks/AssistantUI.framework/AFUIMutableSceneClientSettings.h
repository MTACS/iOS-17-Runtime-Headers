
@interface AFUIMutableSceneClientSettings : UIMutableApplicationSceneClientSettings <AFUISceneClientSettings>

@property (nonatomic) unsigned int clientWindowContextID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned int)clientWindowContextID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setClientWindowContextID:(unsigned int)arg1;

@end
