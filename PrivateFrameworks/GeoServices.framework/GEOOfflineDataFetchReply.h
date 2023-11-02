
@interface GEOOfflineDataFetchReply : GEOXPCReply <GEOXPCReply> {
    GEOTileData * _data;
}

@property (nonatomic, retain) GEOTileData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)data;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setData:(id)arg1;

@end
