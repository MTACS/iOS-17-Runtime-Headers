
@interface _AFEndpointInfoMutation : NSObject <AFEndpointInfoMutating> {
    AFEndpointInfo * _base;
    NSString * _identifier;
    NSString * _mediaRouteIdentifier;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasIdentifier : 1; 
        unsigned int hasMediaRouteIdentifier : 1; 
    }  _mutationFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getIdentifier;
- (id)getMediaRouteIdentifier;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setIdentifier:(id)arg1;
- (void)setMediaRouteIdentifier:(id)arg1;

@end
