
@interface UIWindowSceneGeometryPreferencesIOS : UIWindowSceneGeometryPreferences {
    unsigned long long  _interfaceOrientations;
}

@property (nonatomic) unsigned long long interfaceOrientations;

- (long long)_type;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInterfaceOrientations:(unsigned long long)arg1;
- (unsigned long long)interfaceOrientations;
- (bool)isEqual:(id)arg1;
- (void)setInterfaceOrientations:(unsigned long long)arg1;

@end
