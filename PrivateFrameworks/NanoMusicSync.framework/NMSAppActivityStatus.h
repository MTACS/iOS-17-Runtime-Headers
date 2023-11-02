
@interface NMSAppActivityStatus : NSObject {
    NSString * _bundleID;
}

@property (nonatomic, readonly) NSString *bundleID;

- (void).cxx_destruct;
- (double)_defaultDormancyInterval;
- (bool)_exceedsDormancyInterval:(double)arg1 forDate:(id)arg2;
- (id)bundleID;
- (id)description;
- (id)initWithBundleID:(id)arg1;
- (bool)isAppContentDormant;
- (bool)isAppContentDormantWithInterval:(double)arg1;
- (bool)isAppDownloadingDormant;
- (bool)isAppDownloadingDormantWithInterval:(double)arg1;

@end
