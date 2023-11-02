
@interface GEOOfflineDataCheckExistenceReply : GEOXPCReply <GEOXPCReply> {
    bool  _exists;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool exists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)encodeToXPCDictionary:(id)arg1;
- (bool)exists;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setExists:(bool)arg1;

@end
