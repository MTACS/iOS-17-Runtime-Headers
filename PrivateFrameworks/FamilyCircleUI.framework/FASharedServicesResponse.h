
@interface FASharedServicesResponse : AAResponse {
    bool  _locationAllowed;
    NSArray * _serviceGroups;
    NSArray * _services;
}

@property (nonatomic, readonly) bool locationAllowed;
@property (nonatomic, readonly) NSArray *serviceGroups;
@property (nonatomic, readonly) NSArray *services;

- (void).cxx_destruct;
- (void)_initializeServicesMapWithGroups:(id)arg1 andServices:(id)arg2;
- (void)_setLocationAllowedWithLocation:(bool)arg1;
- (void)_sharedServicesWithNoGrouping:(id)arg1;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (bool)locationAllowed;
- (id)serviceGroups;
- (id)services;

@end
