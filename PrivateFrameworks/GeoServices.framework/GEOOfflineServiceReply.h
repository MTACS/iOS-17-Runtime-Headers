
@interface GEOOfflineServiceReply : GEOXPCReply <GEOXPCReply> {
    NSData * _response;
    NSData * _responseMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *response;
@property (nonatomic, retain) NSData *responseMetadata;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)response;
- (id)responseMetadata;
- (void)setResponse:(id)arg1;
- (void)setResponseMetadata:(id)arg1;

@end
