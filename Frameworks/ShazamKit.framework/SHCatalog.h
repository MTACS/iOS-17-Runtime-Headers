
@interface SHCatalog : NSObject {
    SHCatalogConfiguration * __configuration;
}

@property (nonatomic, readonly, copy) SHCatalogConfiguration *_configuration;
@property (nonatomic, readonly) double maximumQuerySignatureDuration;
@property (nonatomic, readonly) double minimumQuerySignatureDuration;

+ (bool)_validateInstallationID:(id)arg1;

- (void).cxx_destruct;
- (id)_configuration;
- (id)_createMatcher;
- (id)_createSessionDriver;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (double)maximumQuerySignatureDuration;
- (double)minimumQuerySignatureDuration;

@end
