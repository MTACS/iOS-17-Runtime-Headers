
@interface AFSiriTaskContextProvider : NSObject <AFSiriAppContextProviding> {
    AFSiriTaskmaster * _taskmaster;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)getAppContextWithDeliveryHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithTaskmaster:(id)arg1;

@end
