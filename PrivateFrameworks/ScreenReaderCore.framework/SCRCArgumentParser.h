
@interface SCRCArgumentParser : SCRCArgumentSubcommand {
    NSArray * __arguments;
    SCRCArgumentSubcommand * __subcommand;
    NSMutableArray * __subcommandArray;
    NSString * _appName;
    bool  _isLaunchedAtLogin;
}

@property (nonatomic, copy) NSArray *_arguments;
@property (nonatomic, retain) SCRCArgumentSubcommand *_subcommand;
@property (nonatomic, retain) NSMutableArray *_subcommandArray;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic) bool isLaunchedAtLogin;

+ (id)commandPath;
+ (id)processIdentifier;
+ (id)versionString;

- (void).cxx_destruct;
- (id)_arguments;
- (id)_displayHelp:(id)arg1;
- (id)_displayVersion:(id)arg1;
- (id)_subcommand;
- (id)_subcommandArray;
- (void)addSubcommand:(id)arg1;
- (id)appName;
- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;
- (bool)isLaunchedAtLogin;
- (bool)parse;
- (int)run;
- (void)setAppName:(id)arg1;
- (void)setIsLaunchedAtLogin:(bool)arg1;
- (id)setRunningAtStartup:(id)arg1;
- (void)set_arguments:(id)arg1;
- (void)set_subcommand:(id)arg1;
- (void)set_subcommandArray:(id)arg1;
- (void)stop;

@end
