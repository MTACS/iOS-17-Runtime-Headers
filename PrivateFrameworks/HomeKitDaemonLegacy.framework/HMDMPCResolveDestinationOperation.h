
@interface HMDMPCResolveDestinationOperation : HMFOperation <HMFLogging, HMFObject> {
    bool  _forceSingleGroup;
    NSArray * _hashedRouteIDs;
    long long  _mediaApplicationDestination;
    NSString * _mediaApplicationIdentifier;
    <HMDMPCAssistantRemoteControlDestinationFactory> * _remoteControlDestinationFactory;
    id /* block */  _resolveDestinationCompletionBlock;
    MPCAssistantMutableRemoteControlDestination * _resolvedDestination;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool forceSingleGroup;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *hashedRouteIDs;
@property (nonatomic, readonly) long long mediaApplicationDestination;
@property (nonatomic, readonly, copy) NSString *mediaApplicationIdentifier;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (retain) <HMDMPCAssistantRemoteControlDestinationFactory> *remoteControlDestinationFactory;
@property (copy) id /* block */ resolveDestinationCompletionBlock;
@property (retain) MPCAssistantMutableRemoteControlDestination *resolvedDestination;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)description;
- (bool)forceSingleGroup;
- (id)hashedRouteIDs;
- (id)initWithHashedRouteIDs:(id)arg1 mediaApplicationDestination:(long long)arg2 mediaApplicationIdentifier:(id)arg3 forceSingleGroup:(bool)arg4 completion:(id /* block */)arg5;
- (id)initWithHashedRouteIDs:(id)arg1 mediaApplicationDestination:(long long)arg2 mediaApplicationIdentifier:(id)arg3 forceSingleGroup:(bool)arg4 completion:(id /* block */)arg5 remoteControlDestinationFactory:(id)arg6;
- (void)main;
- (long long)mediaApplicationDestination;
- (id)mediaApplicationIdentifier;
- (id)privateDescription;
- (id)remoteControlDestinationFactory;
- (id /* block */)resolveDestinationCompletionBlock;
- (id)resolvedDestination;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setRemoteControlDestinationFactory:(id)arg1;
- (void)setResolveDestinationCompletionBlock:(id /* block */)arg1;
- (void)setResolvedDestination:(id)arg1;
- (id)shortDescription;

@end
