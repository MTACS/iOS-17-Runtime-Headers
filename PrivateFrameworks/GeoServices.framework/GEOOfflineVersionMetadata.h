
@interface GEOOfflineVersionMetadata : NSObject <GEOXPCSerializable> {
    NSDictionary * _activeVersions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (void)enumerateLayerVersions:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithDataConfiguration:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;

@end
