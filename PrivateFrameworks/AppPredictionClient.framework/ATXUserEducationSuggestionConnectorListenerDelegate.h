
@interface ATXUserEducationSuggestionConnectorListenerDelegate : NSObject <NSXPCListenerDelegate> {
    int (* _interfaceFactory;
    id  _requestHandler;
    NSString * _serviceName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)arg1 interfaceFactory:(int (*)arg2 requestHandler:(id)arg3;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
