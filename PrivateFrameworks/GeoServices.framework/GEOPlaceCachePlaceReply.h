
@interface GEOPlaceCachePlaceReply : GEOXPCReply <GEOXPCReply> {
    NSArray * _identifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *identifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)identifiers;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setIdentifiers:(id)arg1;

@end
