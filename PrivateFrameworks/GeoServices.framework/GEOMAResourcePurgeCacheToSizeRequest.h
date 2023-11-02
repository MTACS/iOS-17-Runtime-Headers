
@interface GEOMAResourcePurgeCacheToSizeRequest : GEOXPCRequest <GEOXPCRequest> {
    unsigned long long  _targetSize;
    int  _urgency;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long targetSize;
@property (nonatomic) int urgency;

+ (Class)replyClass;

- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)reply;
- (void)setTargetSize:(unsigned long long)arg1;
- (void)setUrgency:(int)arg1;
- (unsigned long long)targetSize;
- (int)urgency;

@end
