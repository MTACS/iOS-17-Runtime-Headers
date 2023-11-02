
@interface SRSensorsCache : NSObject {
    NSArray * _sensorDescriptionsDirs;
    NSCache * _sensorsCache;
}

+ (void)initialize;
+ (void)setDefaultCache:(id)arg1;

- (void)dealloc;
- (id)init;
- (id)initWithDirectories:(id)arg1;

@end
