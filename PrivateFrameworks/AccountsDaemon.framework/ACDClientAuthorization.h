
@interface ACDClientAuthorization : NSObject {
    ACDClient * _client;
    NSSet * _grantedPermissions;
    bool  _isGranted;
    NSDictionary * _options;
}

@property (nonatomic, retain) ACDClient *client;
@property (nonatomic, retain) NSSet *grantedPermissions;
@property (nonatomic) bool isGranted;
@property (nonatomic, copy) NSDictionary *options;

- (void).cxx_destruct;
- (id)client;
- (id)grantedPermissions;
- (id)initForClient:(id)arg1;
- (bool)isGranted;
- (id)options;
- (void)setClient:(id)arg1;
- (void)setGrantedPermissions:(id)arg1;
- (void)setIsGranted:(bool)arg1;
- (void)setOptions:(id)arg1;

@end
