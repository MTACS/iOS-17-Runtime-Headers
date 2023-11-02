
@interface GEOOfflineServiceRequest : GEOXPCRequest <GEOXPCRequest> {
    NSData * _request;
    NSData * _requestMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *request;
@property (nonatomic, retain) NSData *requestMetadata;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)reply;
- (id)request;
- (id)requestMetadata;
- (void)setRequest:(id)arg1;
- (void)setRequestMetadata:(id)arg1;

@end
