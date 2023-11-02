
@interface GEOETARequestUpdateable : GEOXPCRequest <GEOXPCRequest> {
    GEODataConditionalConnectionProperties * _connectionProperties;
    GEOETATrafficUpdateRequest * _request;
}

@property (nonatomic, retain) GEODataConditionalConnectionProperties *connectionProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOETATrafficUpdateRequest *request;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (id)connectionProperties;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)reply;
- (id)request;
- (void)setConnectionProperties:(id)arg1;
- (void)setRequest:(id)arg1;

@end
