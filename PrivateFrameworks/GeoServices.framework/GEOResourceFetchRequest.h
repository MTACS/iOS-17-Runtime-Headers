
@interface GEOResourceFetchRequest : GEOXPCRequest <GEOXPCRequest> {
    bool  _force;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    NSArray * _resources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool force;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOResourceManifestConfiguration *manifestConfiguration;
@property (nonatomic, retain) NSArray *resources;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (bool)force;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)manifestConfiguration;
- (unsigned long long)reply;
- (id)resources;
- (void)setForce:(bool)arg1;
- (void)setManifestConfiguration:(id)arg1;
- (void)setResources:(id)arg1;

@end
