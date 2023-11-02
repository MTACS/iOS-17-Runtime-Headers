
@interface TPSInstalledAppsValidation : TPSTargetingValidation {
    TPSInstalledAppInfo * _appInfo;
}

@property (nonatomic, retain) TPSInstalledAppInfo *appInfo;

- (void).cxx_destruct;
- (id)appInfo;
- (id)description;
- (id)initWithInstalledAppInfo:(id)arg1;
- (void)setAppInfo:(id)arg1;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
