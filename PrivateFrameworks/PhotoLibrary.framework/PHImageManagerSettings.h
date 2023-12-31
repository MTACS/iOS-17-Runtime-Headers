
@interface PHImageManagerSettings : PHSettings {
    bool  _allowCaching;
    bool  _allowImageRequests;
}

@property (nonatomic) bool allowCaching;
@property (nonatomic) bool allowImageRequests;

+ (id)settingsControllerModule;
+ (id)sharedSettings;

- (bool)allowCaching;
- (bool)allowImageRequests;
- (id)parentSettings;
- (void)setAllowCaching:(bool)arg1;
- (void)setAllowImageRequests:(bool)arg1;
- (void)setDefaultValues;

@end
