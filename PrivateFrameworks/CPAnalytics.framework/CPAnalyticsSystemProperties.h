
@interface CPAnalyticsSystemProperties : NSObject {
    NSMutableDictionary * _dynamicProperties;
    NSMutableDictionary * _systemProperties;
}

@property (nonatomic, retain) NSMutableDictionary *dynamicProperties;
@property (nonatomic, retain) NSMutableDictionary *systemProperties;

+ (id)dynamicPhotoLibraryProperties;
+ (id)staticPhotoLibraryProperties;

- (void).cxx_destruct;
- (void)addDynamicProperty:(id)arg1 withProvider:(id)arg2;
- (void)addProperty:(id)arg1 withValue:(id)arg2;
- (id)dynamicProperties;
- (id)init;
- (id)propertyForKey:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3;
- (void)removePhotoLibraryProperties;
- (void)setDynamicProperties:(id)arg1;
- (void)setSystemProperties:(id)arg1;
- (id)systemProperties;

@end
