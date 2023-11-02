
@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob {
    NSDictionary * _metadata;
}

@property (nonatomic, retain) NSDictionary *metadata;

+ (void)updateAlbumMetadata:(id)arg1;

- (void).cxx_destruct;
- (id)_argumentsDictionaryAsData:(id)arg1;
- (id)_argumentsDictionaryFromXPCEvent:(id)arg1;
- (long long)daemonOperation;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (id)metadata;
- (void)run;
- (void)runDaemonSide;
- (void)setMetadata:(id)arg1;

@end
