
@interface GEOPlaceRequestMessage : GEOXPCRequest <GEOXPCRequest> {
    unsigned long long  _cachePolicy;
    GEOPDPlaceRequest * _request;
    NSUUID * _requestUUID;
    double  _timeout;
}

@property (nonatomic) unsigned long long cachePolicy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOPDPlaceRequest *request;
@property (nonatomic, retain) NSUUID *requestUUID;
@property (readonly) Class superclass;
@property (nonatomic) double timeout;

+ (Class)replyClass;

- (void).cxx_destruct;
- (unsigned long long)cachePolicy;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)reply;
- (id)request;
- (id)requestUUID;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end
