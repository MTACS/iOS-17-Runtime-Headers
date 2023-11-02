
@interface ATXFaceGalleryFileReader : NSObject {
    long long  _source;
}

@property (nonatomic, readonly, copy) ATXFaceGalleryConfiguration *configuration;

+ (id)_loadConfigurationFromPath:(id)arg1;
+ (id)_pathForSource:(long long)arg1;

- (id)configuration;
- (id)initWithSource:(long long)arg1;
- (bool)writeConfiguration:(id)arg1 error:(id*)arg2;

@end
