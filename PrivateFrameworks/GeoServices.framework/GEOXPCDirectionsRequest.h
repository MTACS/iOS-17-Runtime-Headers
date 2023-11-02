
@interface GEOXPCDirectionsRequest : GEOXPCRequest <GEOXPCRequest> {
    GEODirectionsRequest * _directionsRequest;
    int  _priority;
    bool  _useBackgroundURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GEODirectionsRequest *directionsRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic) int priority;
@property (readonly) Class superclass;
@property (nonatomic) bool useBackgroundURL;

+ (Class)replyClass;

- (void).cxx_destruct;
- (id)directionsRequest;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (int)priority;
- (unsigned long long)reply;
- (void)setDirectionsRequest:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setUseBackgroundURL:(bool)arg1;
- (bool)useBackgroundURL;

@end
