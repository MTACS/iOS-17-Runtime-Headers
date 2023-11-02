
@interface NSFileProviderService : NSObject {
    id  _endpointCreatingProxy;
    NSString * _name;
    NSObject<OS_dispatch_group> * _requestFinishedGroup;
}

@property (readonly, copy) NSString *name;

- (void)dealloc;
- (id)fetchFileProviderConnectionAndReturnError:(id*)arg1;
- (void)getFileProviderConnectionWithCompletionHandler:(id /* block */)arg1;
- (id)initWithName:(id)arg1 endpointCreatingProxy:(id)arg2 requestFinishedGroup:(id)arg3;
- (id)name;

@end
