
@interface MRAVEndpointObserver : NSObject {
    bool  _didBegin;
    MRAVRoutingDiscoverySession * _discoverySession;
    MRAVEndpoint * _endpoint;
    id /* block */  _endpointChangedCallback;
    NSArray * _endpoints;
    NSString * _label;
    NSString * _outputDeviceUID;
}

@property (nonatomic, readonly) MRAVEndpoint *endpoint;
@property (nonatomic, copy) id /* block */ endpointChangedCallback;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *outputDeviceUID;

- (void).cxx_destruct;
- (void)_handleOutputContextDidChangeNotification;
- (void)begin;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)end;
- (id)endpoint;
- (id /* block */)endpointChangedCallback;
- (id)initWithOutputDeviceUID:(id)arg1;
- (id)initWithOutputDeviceUID:(id)arg1 label:(id)arg2 callback:(id /* block */)arg3;
- (id)label;
- (id)outputDeviceUID;
- (void)setEndpointChangedCallback:(id /* block */)arg1;

@end
