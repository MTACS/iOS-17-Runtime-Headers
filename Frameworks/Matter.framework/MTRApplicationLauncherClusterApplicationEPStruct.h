
@interface MTRApplicationLauncherClusterApplicationEPStruct : NSObject <NSCopying> {
    MTRApplicationLauncherClusterApplicationStruct * _application;
    NSNumber * _endpoint;
}

@property (nonatomic, copy) MTRApplicationLauncherClusterApplicationStruct *application;
@property (nonatomic, copy) NSNumber *endpoint;

- (void).cxx_destruct;
- (id)application;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endpoint;
- (id)init;
- (void)setApplication:(id)arg1;
- (void)setEndpoint:(id)arg1;

@end
