
@interface GEOOfflineDataFetchAvailableKeysReply : GEOXPCReply <GEOXPCReply> {
    NSArray * _keys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *keys;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)keys;
- (void)setKeys:(id)arg1;

@end
