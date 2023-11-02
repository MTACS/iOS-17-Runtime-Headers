
@interface GEOPlaceFreeSpaceReply : GEOXPCReply <GEOXPCReply> {
    unsigned long long  _freedBytes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long freedBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)encodeToXPCDictionary:(id)arg1;
- (unsigned long long)freedBytes;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setFreedBytes:(unsigned long long)arg1;

@end
