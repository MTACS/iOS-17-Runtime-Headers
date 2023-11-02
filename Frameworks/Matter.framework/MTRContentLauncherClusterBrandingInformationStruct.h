
@interface MTRContentLauncherClusterBrandingInformationStruct : NSObject <NSCopying> {
    MTRContentLauncherClusterStyleInformationStruct * _background;
    MTRContentLauncherClusterStyleInformationStruct * _logo;
    MTRContentLauncherClusterStyleInformationStruct * _progressBar;
    NSString * _providerName;
    MTRContentLauncherClusterStyleInformationStruct * _splash;
    MTRContentLauncherClusterStyleInformationStruct * _waterMark;
}

@property (nonatomic, copy) MTRContentLauncherClusterStyleInformationStruct *background;
@property (nonatomic, copy) MTRContentLauncherClusterStyleInformationStruct *logo;
@property (nonatomic, copy) MTRContentLauncherClusterStyleInformationStruct *progressBar;
@property (nonatomic, copy) NSString *providerName;
@property (nonatomic, copy) MTRContentLauncherClusterStyleInformationStruct *splash;
@property (nonatomic, copy) MTRContentLauncherClusterStyleInformationStruct *waterMark;

- (void).cxx_destruct;
- (id)background;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)logo;
- (id)progressBar;
- (id)providerName;
- (void)setBackground:(id)arg1;
- (void)setLogo:(id)arg1;
- (void)setProgressBar:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setSplash:(id)arg1;
- (void)setWaterMark:(id)arg1;
- (id)splash;
- (id)waterMark;

@end
