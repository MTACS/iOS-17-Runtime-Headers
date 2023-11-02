
@interface ASVSettings : NSObject <ASVSettingsProvider> {
    NSDictionary * _settings;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *settings;
@property (readonly) Class superclass;

+ (float)boolForKey:(id)arg1;
+ (float)floatForKey:(id)arg1;
+ (id)sharedSettings;

- (void).cxx_destruct;
- (float)boolForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (id)init;
- (id)settings;

@end
