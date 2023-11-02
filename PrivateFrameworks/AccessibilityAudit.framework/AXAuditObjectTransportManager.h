
@interface AXAuditObjectTransportManager : NSObject {
    NSMutableDictionary * __keyToTransportInfo;
    NSMutableArray * __transportInfoEncodeOnly;
    bool  _enforceSecureTransport;
}

@property (nonatomic, retain) NSMutableDictionary *_keyToTransportInfo;
@property (nonatomic, retain) NSMutableArray *_transportInfoEncodeOnly;
@property (nonatomic) bool enforceSecureTransport;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_keyToTransportInfo;
- (void)_registerKnownClasses;
- (id)_transportInfoEncodeOnly;
- (id)_transportInfoEncodeOnlyForObject:(id)arg1;
- (id)_transportInfoForObject:(id)arg1;
- (void)_validateTransportObjectIfNeeded:(id)arg1;
- (id)arrayForTransportArray:(id)arg1 expectedClass:(Class)arg2;
- (bool)enforceSecureTransport;
- (id)init;
- (id)objectForTransportDictionary:(id)arg1 expectedClass:(Class)arg2;
- (void)registerTransportInfoMasquerade:(id)arg1 encodeOnly:(bool)arg2;
- (void)registerTransportInfoPropertyBased:(id)arg1;
- (void)registerTransportableClass:(Class)arg1;
- (void)setEnforceSecureTransport:(bool)arg1;
- (void)set_keyToTransportInfo:(id)arg1;
- (void)set_transportInfoEncodeOnly:(id)arg1;
- (id)transportArrayForArray:(id)arg1;
- (id)transportDictionaryForObject:(id)arg1;
- (bool)validateSupportedConnectionSecureTransport:(id)arg1;

@end
