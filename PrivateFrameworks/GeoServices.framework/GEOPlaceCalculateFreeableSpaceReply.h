
@interface GEOPlaceCalculateFreeableSpaceReply : GEOXPCReply <GEOXPCReply> {
    unsigned long long  _freeableBytes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long freeableBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)encodeToXPCDictionary:(id)arg1;
- (unsigned long long)freeableBytes;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setFreeableBytes:(unsigned long long)arg1;

@end
