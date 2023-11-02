
@interface NWURLSessionResponseConsumerDataDelegate : NSObject <NWURLSessionResponseConsumer> {
    NSURLResponse * _currentResponse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSURLResponse *response;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)response;
- (void)task:(id)arg1 deliverData:(id)arg2 complete:(bool)arg3 error:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)task:(id)arg1 deliverResponse:(id)arg2 completionHandler:(id /* block */)arg3;

@end
