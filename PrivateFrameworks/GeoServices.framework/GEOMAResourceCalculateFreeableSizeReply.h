
@interface GEOMAResourceCalculateFreeableSizeReply : GEOXPCReply <GEOXPCReply> {
    unsigned long long  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long size;
@property (readonly) Class superclass;

- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
