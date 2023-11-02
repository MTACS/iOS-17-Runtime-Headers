
@interface PLURIWithHash : NSObject {
    NSObject<OS_xpc_object> * _uri;
    unsigned long long  _uriHash;
}

@property (nonatomic, retain) NSObject<OS_xpc_object> *uri;
@property (nonatomic) unsigned long long uriHash;

- (void).cxx_destruct;
- (id)init;
- (id)initWithXPCURI:(id)arg1;
- (void)setUri:(id)arg1;
- (void)setUriHash:(unsigned long long)arg1;
- (id)uri;
- (unsigned long long)uriHash;

@end
