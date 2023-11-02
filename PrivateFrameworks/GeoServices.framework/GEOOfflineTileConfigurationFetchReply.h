
@interface GEOOfflineTileConfigurationFetchReply : GEOXPCReply <GEOXPCReply> {
    GEOPBOfflineTileMetadata * _configuration;
}

@property (nonatomic, retain) GEOPBOfflineTileMetadata *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)configuration;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setConfiguration:(id)arg1;

@end
