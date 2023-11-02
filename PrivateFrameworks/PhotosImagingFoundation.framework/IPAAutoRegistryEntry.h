
@interface IPAAutoRegistryEntry : NSObject {
    Class  _autoSettingsClass;
    bool  _persistable;
}

@property (nonatomic, retain) Class autoSettingsClass;
@property (nonatomic) bool persistable;

- (void).cxx_destruct;
- (Class)autoSettingsClass;
- (bool)persistable;
- (void)setAutoSettingsClass:(Class)arg1;
- (void)setPersistable:(bool)arg1;

@end
