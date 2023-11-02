
@interface GEOMapSubscriptionSizeEstimationReply : GEOXPCReply <GEOXPCReply> {
    long long  _sizeInBytes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long sizeInBytes;
@property (readonly) Class superclass;

- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setSizeInBytes:(long long)arg1;
- (long long)sizeInBytes;

@end
