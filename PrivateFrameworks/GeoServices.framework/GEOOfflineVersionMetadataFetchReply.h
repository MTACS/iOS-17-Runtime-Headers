
@interface GEOOfflineVersionMetadataFetchReply : GEOXPCReply <GEOXPCReply> {
    GEOOfflineVersionMetadata * _metadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOOfflineVersionMetadata *metadata;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)metadata;
- (void)setMetadata:(id)arg1;

@end
