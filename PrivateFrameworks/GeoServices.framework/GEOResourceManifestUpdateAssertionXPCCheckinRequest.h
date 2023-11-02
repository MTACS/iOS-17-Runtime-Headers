
@interface GEOResourceManifestUpdateAssertionXPCCheckinRequest : GEOXPCRequest <GEOXPCRequest> {
    NSString * _reason;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *reason;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

+ (Class)replyClass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)reason;
- (unsigned long long)reply;
- (void)setReason:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
