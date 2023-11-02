
@interface PPNamedEntityExtractionPlugin : NSObject <HVUserActivityConsumer> {
    PPNamedEntityDissector * _dissector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_entityContainersForContent:(id)arg1 contentDataSource:(id)arg2 isOutgoing:(bool)arg3 contactHandles:(id)arg4 uniqueIdentifier:(id)arg5 domainIdentifier:(id)arg6 bundleIdentifier:(id)arg7;
- (id)_entityContainersForUserAction:(id)arg1 searchableItem:(id)arg2;
- (id)_extractionCountForContainers:(id)arg1;
- (id)_extractionsFromEntityContainers:(id)arg1;
- (void)_processCSSearchableItemLocationWithName:(id)arg1 thoroughfare:(id)arg2 city:(id)arg3 state:(id)arg4 country:(id)arg5 postalCode:(id)arg6 latitude:(id)arg7 longitude:(id)arg8 extractionContainer:(id)arg9;
- (bool)_processUserActivity:(id)arg1 extractionContainer:(id)arg2 rawTextOut:(id*)arg3 language:(id)arg4;
- (void)_writeAndFlushContainers:(id)arg1;
- (id)consumeSearchableUserActivityWithContext:(id)arg1;
- (id)consumeUserActivityMetadataWithContext:(id)arg1;
- (id)consumerName;
- (id)deleteDataDerivedFromContentMatchingRequest:(id)arg1;
- (id)entityContainersForUserActivity:(id)arg1;
- (id)init;
- (id)initWithNamedEntityDissector:(id)arg1;

@end
