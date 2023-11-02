
@interface GEOImageServiceRequestSimple : GEOXPCRequest <GEOXPCRequest> {
    NSUUID * _identifier;
    GEOImageServiceRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) GEOImageServiceRequest *request;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)identifier;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)reply;
- (id)request;
- (void)setIdentifier:(id)arg1;
- (void)setRequest:(id)arg1;

@end
