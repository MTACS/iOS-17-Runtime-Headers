
@interface ICLaunchConfiguration : NSObject {
    NSString * _cloudAccountArchiveName;
    NSString * _container;
    unsigned long long  _environment;
    NSString * _localAccountArchiveName;
    bool  _resetsCloud;
    bool  _resetsContainer;
    bool  _resetsState;
}

@property (nonatomic, copy) NSString *cloudAccountArchiveName;
@property (nonatomic, copy) NSString *container;
@property (nonatomic) unsigned long long environment;
@property (nonatomic, readonly) NSArray *launchArguments;
@property (nonatomic, copy) NSString *localAccountArchiveName;
@property (nonatomic) bool resetsCloud;
@property (nonatomic) bool resetsContainer;
@property (nonatomic) bool resetsState;

+ (id)currentConfiguration;
+ (id)nonDefaultValueForValue:(id)arg1;
+ (id)userInterfaceTesting;

- (void).cxx_destruct;
- (id)cloudAccountArchiveName;
- (id)container;
- (unsigned long long)environment;
- (id)initWithDictionary:(id)arg1;
- (id)initWithEnvironment:(unsigned long long)arg1 container:(id)arg2 resetsContainer:(bool)arg3 resetsCloud:(bool)arg4 resetsState:(bool)arg5 localAccountArchive:(id)arg6 cloudAccountArchive:(id)arg7;
- (id)launchArguments;
- (id)localAccountArchiveName;
- (bool)resetsCloud;
- (bool)resetsContainer;
- (bool)resetsState;
- (void)setCloudAccountArchiveName:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setEnvironment:(unsigned long long)arg1;
- (void)setLocalAccountArchiveName:(id)arg1;
- (void)setResetsCloud:(bool)arg1;
- (void)setResetsContainer:(bool)arg1;
- (void)setResetsState:(bool)arg1;

@end
