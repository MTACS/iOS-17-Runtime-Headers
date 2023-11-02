
@interface ATXAppLaunchLogger : ATXAbstractVersionedDatabase <ATXPeriodicLoggerSource> {
    bool  _enabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)_init;
- (id)createCustomSchema;
- (id)getMetrics;
- (long long)latestVersion;
- (void)logAppLaunchFrom:(unsigned long long)arg1 at:(id)arg2;
- (void)setEnabled:(bool)arg1;

@end
