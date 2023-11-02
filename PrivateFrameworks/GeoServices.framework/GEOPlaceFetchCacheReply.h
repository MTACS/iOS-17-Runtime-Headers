
@interface GEOPlaceFetchCacheReply : GEOXPCReply <GEOXPCReply> {
    NSDictionary * _allCacheEntries;
}

@property (nonatomic, retain) NSDictionary *allCacheEntries;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allCacheEntries;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setAllCacheEntries:(id)arg1;

@end
