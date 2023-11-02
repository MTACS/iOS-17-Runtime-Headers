
@interface HKDataFlowLink : NSObject {
    NSObject<OS_os_log> * _category;
    Protocol * _destinationProtocol;
    NSHashTable * _destinations;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <HKDataFlowLinkProcessor> * _processor;
    Protocol * _sourceProtocol;
    NSHashTable * _sources;
}

@property (nonatomic, readonly) Protocol *destinationProtocol;
@property (nonatomic, readonly) <HKDataFlowLinkProcessor> *processor;
@property (nonatomic, readonly) Protocol *sourceProtocol;

- (void).cxx_destruct;
- (void)addDestination:(id)arg1;
- (void)addSource:(id)arg1;
- (id)allDestinationProcessors;
- (id)allSourceProcessors;
- (id)description;
- (void)destination:(id)arg1 didAddDownstreamDestination:(id)arg2;
- (id)destinationProcessorsConformingToProtocol:(id)arg1;
- (id)destinationProtocol;
- (id)initWithProcessor:(id)arg1 sourceProtocol:(id)arg2 destinationProtocol:(id)arg3 loggingCategory:(id)arg4;
- (id)processor;
- (void)removeDestination:(id)arg1;
- (void)removeSource:(id)arg1;
- (void)sendToDestinationProcessors:(id /* block */)arg1;
- (void)source:(id)arg1 didAddUpstreamSource:(id)arg2;
- (id)sourceProtocol;

@end
