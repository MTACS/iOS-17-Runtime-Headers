
@interface CPAnalyticsDestinationsRegistry : NSObject {
    NSMutableArray * _destinations;
}

@property (nonatomic, readonly) NSArray *destinations;

- (void).cxx_destruct;
- (id)_destinationClassMap;
- (void)_parseDestinationsFromConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (id)_readConfiguration:(id)arg1;
- (void)addDestination:(id)arg1;
- (id)destinations;
- (id)init;
- (void)removeDestination:(id)arg1;
- (void)removePhotoLibraryFromDestinations;
- (void)sendToAllDestinations:(id)arg1;
- (void)setupWithConfigurationAtURL:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (void)updateWithConfigurationAtURL:(id)arg1 cpAnalyticsInstance:(id)arg2;

@end
