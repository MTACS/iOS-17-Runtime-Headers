
@interface GEOOfflineServiceSetStateRequest : GEOXPCRequest <GEOXPCRequest> {
    unsigned long long  _savedState;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long savedState;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)reply;
- (unsigned long long)savedState;
- (void)setSavedState:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
