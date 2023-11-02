
@interface TKClientToken : NSObject {
    NSXPCListenerEndpoint * _SEPKeyEndpoint;
    NSXPCListenerEndpoint * _configurationEndpoint;
    NSXPCListenerEndpoint * _endpoint;
    NSString * _tokenID;
    NSXPCListenerEndpoint * _watcherEndpoint;
}

@property (nonatomic, readonly) NSXPCListenerEndpoint *SEPKeyEndpoint;
@property (nonatomic, readonly) NSXPCListenerEndpoint *configurationEndpoint;
@property (nonatomic, readonly) NSXPCListenerEndpoint *endpoint;
@property (nonatomic, readonly) NSString *tokenID;
@property (nonatomic, readonly) NSXPCListenerEndpoint *watcherEndpoint;

+ (id)builtinTokenIDs;

- (void).cxx_destruct;
- (id)SEPKeyEndpoint;
- (id)_initWithTokenID:(id)arg1;
- (id)configurationEndpoint;
- (id)endpoint;
- (id)initWithTokenID:(id)arg1;
- (id)initWithTokenID:(id)arg1 serverEndpoint:(id)arg2 targetUID:(id)arg3;
- (id)sessionWithLAContext:(id)arg1 error:(id*)arg2;
- (id)tokenID;
- (id)watcherEndpoint;

@end
