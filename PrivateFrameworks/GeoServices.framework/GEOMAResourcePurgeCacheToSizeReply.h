
@interface GEOMAResourcePurgeCacheToSizeReply : GEOXPCReply <GEOXPCReply> {
    unsigned long long  _amountDeleted;
}

@property (nonatomic) unsigned long long amountDeleted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)amountDeleted;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setAmountDeleted:(unsigned long long)arg1;

@end
