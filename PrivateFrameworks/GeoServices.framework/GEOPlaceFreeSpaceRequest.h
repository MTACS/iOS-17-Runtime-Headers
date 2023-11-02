
@interface GEOPlaceFreeSpaceRequest : GEOXPCRequest <GEOXPCRequest> {
    unsigned long long  _freeBytes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long freeBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void)encodeToXPCDictionary:(id)arg1;
- (unsigned long long)freeBytes;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)reply;
- (void)setFreeBytes:(unsigned long long)arg1;

@end
