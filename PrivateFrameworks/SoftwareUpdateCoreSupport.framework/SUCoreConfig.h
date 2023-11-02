
@interface SUCoreConfig : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _defaultsPath;
    NSString * _projectName;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly, retain) NSString *defaultsPath;
@property (nonatomic, readonly, retain) NSString *projectName;

- (void).cxx_destruct;
- (id)accessQueue;
- (void)clearConfig;
- (id)defaultsPath;
- (id)description;
- (bool)getBoolConfigForKey:(id)arg1;
- (bool)getBoolConfigForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)getConfig;
- (id)getNumberConfigForKey:(id)arg1;
- (id)getStringConfigForKey:(id)arg1;
- (id)initWithProjectName:(id)arg1;
- (id)initWithProjectName:(id)arg1 defaultsPath:(id)arg2;
- (id)projectName;
- (void)setConfig:(id)arg1 forKey:(id)arg2;
- (id)stateSafeGetConfig;
- (void)stateSafeSetConfig:(id)arg1 forKey:(id)arg2;

@end
